//Deleting first node from single linked list

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
	
	void deleteStart(){
		if ( head == NULL){
			cout << "There is nothing to delete, List is empty";
			return;
		}
		
		Node* temp = head;
		head = head->next;
		delete temp;
		
		cout << "First node deleted" << endl;
	}

};


int main (){
	SinglyLinkedList list;

    list.insertStart(10);
    list.insertStart(20);
    list.insertStart(30);
    list.insertStart(40);
    
    cout << "Linked List: ";
    list.display();
    
	list.deleteStart();
	
    cout << "Linked List: ";
    list.display();
	
	return 0;
}
