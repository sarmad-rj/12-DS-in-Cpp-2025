//Accessing nodes of linked list

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
	
	void search(int value) {
	    Node* temp = head;
	    int position = 1;
    
	    while (temp != NULL) {
	        if (temp->data == value) {
	            cout << "Value " << value << " found at position " << position 
	                 << " with address " << temp << endl;
	            return; 
	        }
	        temp = temp->next;
	        position++;
	    }
    	cout << "Value " << value << " not found in the list." << endl;
	}

};


int main (){
	SinglyLinkedList list;

    list.insertStart(10);
    list.insertStart(20);
    list.insertStart(30);
    list.insertStart(5);
    
	list.search(30);
	
    cout << "Linked List: ";
    list.display();
	
	return 0;
}
