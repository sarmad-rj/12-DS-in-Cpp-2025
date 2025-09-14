//Inserting after specific value


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
	
	void insertAfter(int target, int val){
		Node* temp = head;
		
		while (temp != NULL){
			if (temp->data == target){
				Node* newNode =  new Node(val);
				
				newNode->next = temp->next;
				temp->next = newNode;
				
				cout << "Inserted " << val << " after " << target << endl ;
				return;
			} 
			temp = temp->next;
		}
			
	}
};


int main (){
	SinglyLinkedList list;

    list.insertStart(10);
    list.insertStart(20);
    list.insertStart(30);
    list.insertStart(40);
    
	list.insertAfter(30, 25);
	
    cout << "Linked List: ";
    list.display();
	
	return 0;
}
