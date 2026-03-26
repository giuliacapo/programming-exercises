// Stack implementation using array
// Supports push and pop operations (LIFO)
// Time complexity: O(1) for push/pop
// Implemented during university data structures exercises

#include <iostream>
using namespace std;

// Example data type
typedef int Tdato;

struct TipoStack {
    int n;      // current number of elements
    int dim;    // maximum size
    Tdato* s;   // array to store elements

    // Constructor
    TipoStack(int d) : n(0), dim(d), s(new Tdato[d]) {}

    // Destructor
    ~TipoStack() { delete[] s; }
};

// Check if stack is full
bool stackIsFull(TipoStack* p){
    return (p->n == p->dim);
}

// Check if stack is empty
bool stackIsEmpty(TipoStack* p){
    return (p->n == 0);
}

// Push operation (adds element on top)
void push(TipoStack* p, Tdato d) {
    if (stackIsFull(p)) {
        cout << "Stack full" << endl;
        return;
    }
    p->s[p->n] = d;
    p->n++;
}

// Pop operation (removes element from top)
Tdato pop(TipoStack* p) {
    if (!stackIsEmpty(p)) {
        p->n--;
        return p->s[p->n];
    } else {
        cout << "Stack empty" << endl;
        return -1; // or handle differently if Tdato is not int
    }
}

// Example usage
int main() {
    TipoStack s(5);
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    cout << "Popped: " << pop(&s) << endl;
    cout << "Popped: " << pop(&s) << endl;

    return 0;
}
