//Deleting last node from single linked list

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


	void deleteEnd() {
	    if (head == NULL) {
	        cout << "List is empty, nothing to delete." << endl;
	        return;
	    }
	
	    if (head->next == NULL) {
	        delete head;
	        head = NULL;
	        cout << "Last node deleted, list is now empty." << endl;
	        return;
	    }
	
	    Node* temp = head;
	    while (temp->next->next != NULL) {
	        temp = temp->next;
	    }
	
	    delete temp->next;
	    temp->next = NULL;
	
	    cout << "Last node deleted." << endl;
	}

};


int main (){
	SinglyLinkedList list;

    list.insertStart(10);
    list.insertStart(20);
    list.insertStart(30);
    list.insertStart(40);
    
    cout << "Original List: ";
    list.display();
    
	list.deleteEnd();
	
    cout << "Linked List After Deletion: ";
    list.display();
	
	return 0;
}
