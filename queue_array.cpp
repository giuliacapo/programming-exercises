// Queue implementation using circular array (FIFO)
// Supports put and get operations (FIFO)
// Implemented during university data structures exercises

typedef struct TipoCoda {
	int n;    // number of elements 
	int dim;  // max size
	int head; // head position
	int tail; // tail position
	Tdato *s; // array
	//Contructor
	TipoCoda (int x) {
	dim = x;
	n = 0;
	head = 0;
	tail = 0;
	s = new Tdato[x];
	}
	//Destructor
	~TipoCoda(){
		delete[] s;
	}
} TipoCoda;

// Utility functions 
bool codaIsEmpty(TipoCoda* p) {
    return p->n == 0;
}

bool codaIsFull(TipoCoda* p) {
    return p->n == p->dim;
}

// Main operations 
void put(TipoCoda* p, Tdato d){

    if (codaIsFull(p)) {
        cout << "coda piena" << endl;
        return;
    }

    p->s[p->tail] = d;
    p->tail = (p->tail + 1) % p->dim;
    p->n++;
}

Tdato get(TipoCoda* p){

    if (codaIsEmpty(p)) {
        cout << "coda vuota" << endl;
        return -1;
    }

    Tdato d = p->s[p->head];
    p->head = (p->head + 1) % p->dim;
    p->n--;

    return d;
}
