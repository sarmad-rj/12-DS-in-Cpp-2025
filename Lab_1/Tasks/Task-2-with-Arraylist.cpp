#include <iostream>
using namespace std;

const int Max = 100;

class ArrayList {
	int arr[Max];
	int size;
	
public: 
	ArrayList(){
		size = 0;
	}
	
	void insertStart(int val) {
		if (size < Max) {
			for (int i= size ; i> 0 ; i--) 
				arr[i] = arr[i-1] ;
				arr[0] = val;
				size++;
		} else {
			cout<< "List is full\n";
		}
	}



	void insertAfter (int target , int val) {
		for (int i = 0 ; i<size; i++) {
			if(arr[i] == target) {
				if(size<Max){
					//shift elements to the right 
					for (int j = size; j> i+1;j--)
					arr[j] = arr[j-1];
					arr[i+1] = val;
					size++;
				} else {
					cout<<"List is full/n";
				} 
				return;
			}
		}
	}

	
	void insertEnd(int val){
		if (size < Max){
			arr[size++] =  val;
		} else{
			cout << "List is full";
		}
	}
	
	void deleteValue ( int val) {
		for (int i = 0 ; i< size; i++) {
			if(arr[i] == val) {
				//shift elements to the left 
				for (int j = i; j<size-1 ;j++)
			
				arr[j] = arr[j+1] ;
				size--;
			} 
			return;
		}
		cout<<"value not found";
	}
	
	
	void display(){
		for (int i = 0; i  < size; i++){
			cout << arr[i] << " "; 
		}
		cout << endl;
	}
};





int main() {
    ArrayList arr;
    arr.insertEnd(10);
    arr.insertEnd(20);
    
    arr.insertStart(22);
	arr.insertAfter(22,12);

    arr.deleteValue(22);
    arr.display();
    

    return 0;
}

