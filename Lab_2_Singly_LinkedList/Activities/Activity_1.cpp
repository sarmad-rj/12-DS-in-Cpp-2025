#include <iostream>
using namespace std;

// Define the Node structure
struct Nodetype {
    int data;
    Nodetype* next;
};

Nodetype* first = NULL;
Nodetype* last = NULL;

void insertEnd() {
    Nodetype* p;
    p = new Nodetype;
    
    cout << "Enter the data in node: ";
    cin >> p->data;
    p->next = NULL;
    
    if (first == NULL) {
        first = last = p;
    } else {
        last->next = p;
        last = p;
    }
}

int main() {
    insertEnd();
    insertEnd();
    insertEnd(); 
    
    
    return 0;
}
