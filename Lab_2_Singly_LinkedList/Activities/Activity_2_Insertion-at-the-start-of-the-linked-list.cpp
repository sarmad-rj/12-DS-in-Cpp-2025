//Insertion-at-the-start-of-the-linked-list

#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
	
	Node(int val){
		data = val;
		next = NULL;
	}
};

class SinglyLinkedList {
	Node* head;
	
public:
    SinglyLinkedList() {
        head = NULL;
    }
    
    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
      
    void insertStart(int value) {
	    Node* newNode = new Node(value);
	    newNode->next = head;
	    head = newNode;
	}
	
};


int main (){
	SinglyLinkedList list;

    list.insertStart(5);
    list.insertStart(15);
    list.insertStart(25);
    list.insertStart(35);

    cout << "Linked List: ";
    list.display();
	
	return 0;
}
