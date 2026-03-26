// Queue implementation using circular array (FIFO)
// Supports put (enqueue) and get (dequeue) operations
// Time complexity: O(1) for put/get
// Implemented during university data structures exercises

#include <iostream>
using namespace std;

// Example data type
typedef int Tdato;

struct TipoCoda {
    int n;      // current number of elements
    int dim;    // maximum size
    int head;   // head index
    int tail;   // tail index
    Tdato* s;   // array to store elements

    // Constructor
    TipoCoda(int x) : n(0), dim(x), head(0), tail(0), s(new Tdato[x]) {}

    // Destructor
    ~TipoCoda() { delete[] s; }
};

// Check if queue is empty
bool queueIsEmpty(TipoCoda* p) {
    return p->n == 0;
}

// Check if queue is full
bool queueIsFull(TipoCoda* p) {
    return p->n == p->dim;
}

// Enqueue (put) operation
void put(TipoCoda* p, Tdato d) {
    if (queueIsFull(p)) {
        cout << "Queue full" << endl;
        return;
    }
    p->s[p->tail] = d;
    p->tail = (p->tail + 1) % p->dim;
    p->n++;
}

// Dequeue (get) operation
Tdato get(TipoCoda* p) {
    if (queueIsEmpty(p)) {
        cout << "Queue empty" << endl;
        return -1;
    }
    Tdato d = p->s[p->head];
    p->head = (p->head + 1) % p->dim;
    p->n--;
    return d;
}

// Example usage
int main() {
    TipoCoda q(5);
    put(&q, 10);
    put(&q, 20);
    put(&q, 30);

    cout << "Dequeued: " << get(&q) << endl;
    cout << "Dequeued: " << get(&q) << endl;

    return 0;
}
