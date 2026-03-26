// Stack implementation using array
// Supports push and pop operations (LIFO)
// Implemented during university data structures exercises

// Stack definition
typedef struct TipoStack {
    int n;      // number of elements
    int dim;    // max size
    Tdato* s;   // array

    TipoStack(int d) {
        n = 0;
        dim = d;
        s = new Tdato[dim];
    }

    ~TipoStack() {
        delete[] s;
    }
} TipoStack;

// Utility functions
bool stackIsFull(TipoStack* p){
    return (p->n == p->dim);
}

bool stackIsEmpty(TipoStack* p){
    return (p->n == 0);
}

// Main operations
void push(TipoStack* p, Tdato d) {
	if ( stackIsFull(p)) {
		cout << "stack pieno " << endl;
		return;
 }
	p->s[p->n]=d;
	(p->n)++;
}

int pop(TipoStack* p) {
	if (!(stackIsEmpty(p))) {
		(p->n)--;
		return p->s[p->n];
	}
	else{
		cout << "stack vuoto" << endl;
		return -1;
	}
}
