#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "../stack/stack.cpp"   // include your stack implementation

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

    TipoStack s(10); // Stack with capacity 10

    // Push 5 random conferimenti
    for(int i=0;i<5;i++){
        Tconferimento c = newConferimento();
        push(&s, c);
        cout << "Pushed: " << c.nome << " quantity: " << c.qta << endl;
    }

    cout << "\nProcessing in LIFO order:\n";

    // Pop and process
    while(!stackIsEmpty(&s)){
        Tconferimento c = pop(&s);
        cout << "Processing: " << c.nome << " quantity: " << c.qta << endl;
    }

    return 0;
}
