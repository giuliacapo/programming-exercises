#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "../queue/circular_queue.cpp" // include your queue implementation

#define MAX_NAME 20

// Example data type
struct Tconferimento {
    char nome[MAX_NAME];
    unsigned int data;
    int qta;

    Tconferimento() { nome[0]='\0'; data=0; qta=0; }
};

// Function to generate random conferimento
Tconferimento newConferimento() {
    Tconferimento c;
    c.data = 20250801 + rand()%100; // random date between 20250801-20250831
    c.qta = rand()%10 + 1;
    snprintf(c.nome, MAX_NAME, "Item%d", rand()%100);
    return c;
}

int main() {
    srand(time(NULL));

    TipoCoda q(10); // Queue with capacity 10

    // Put 5 random conferimenti
    for(int i=0;i<5;i++){
        Tconferimento c = newConferimento();
        put(&q, c);
        cout << "Added to queue: " << c.nome << " quantity: " << c.qta << endl;
    }

    cout << "\nProcessing in FIFO order:\n";

    // Get and process
    while(!queueIsEmpty(&q)){
        Tconferimento c = get(&q);
        cout << "Processing: " << c.nome << " quantity: " << c.qta << endl;
    }

    return 0;
}
