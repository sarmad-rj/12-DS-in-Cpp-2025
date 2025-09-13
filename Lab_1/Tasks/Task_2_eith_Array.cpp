#include <iostream>
using namespace std;


int arr[10] = {20, 30, 40, 50, 60, 70};

int main(){
//	0.
	cout << "The Array is: ";
	for (int i = 0; i <= 9; i++){
		cout << arr[i] << ",";
	}
	cout << endl;
	
//	1.
	cout << "\n1. New Array after inserting the value at end of the list: ";
	arr[6] = 80;
	for (int i = 0; i <= 9; i++){
		cout << arr[i] << ",";
	}
	cout << endl;
	
//	2.
	cout << "\n2. New Array after inserting the value at start of the list: ";
	for (int i = 9; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
    arr[0] = 10;
	for (int i = 0; i <= 9; i++){
		cout << arr[i] << ",";
	}
	cout << endl;
	
//	3.
	int after, newValue;
	cout << "\nAfter which value you want to insert new value: ";
	cin >> after;
	bool found = false;
	for ( int i = 0; i <= 9 ; i++){
	    if (after == arr[i]){
	        found = true;
	    }
	}	
	if (found){
		cout << "Enter new value to insert after " << after << " : ";
	    cin >> newValue;	
	    cout << "\n3. New Array after inserting the new value after your given value: ";
	    for (int i = 0; i <= 9; i++){
	    	if ( arr[i] == after ){
	    		int x = i+1;
	    		for (int j = 9; j > x; --j) {
         	 	   arr[j] = arr[j - 1];
       			}
    			arr[x] = newValue;
    			for (int k = 0; k <= 9; k++){
					cout << arr[k] << ",";
				}
				cout << endl;
			}
		}
	}
	else {
	    cout << "This value does not exists!";
	}
	
//	4.
	int before, newValue2;
	cout << "\nBefore which value you want to insert new value: ";
	cin >> before;
	bool found2 = false;
	for ( int i = 0; i <= 9 ; i++){
	    if (before == arr[i]){
	        found2 = true;
	    }
	}	
	if (found2){
		cout << "Enter new value to insert before " << before << " : ";
	    cin >> newValue2;
	    cout << "\n4. New Array after inserting the new value before your given value: ";
	    for (int i = 0; i <= 9; i++){
	    	if ( arr[i] == before ){
	    		int x = i;
	    		for (int j = 9; j >= x; --j) {
         	 	   arr[j] = arr[j - 1];
       			}
       			
    			arr[x] = newValue2;
    			for (int k = 0; k <= 9; k++){
					cout << arr[k] << ",";
				}
				cout << endl;
				break;
			}
			
		}
	}
	else {
	    cout << "This value does not exists!";
	}
	cout << endl;

	cout << "As our old array is used a lot so lets make a new \n \t Array-2: " ; 
	int arr2[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	
	for (int i = 0; i < 10; i++){
		cout << arr2[i] << ", ";
	}
	
	cout << endl;
	
//	6.
	cout << "\n6. New Array-2 after removing the last element: " ; 
	for (int i = 0; i < 9; i++){
		cout << arr2[i] << ", ";
	}
	
//	7.
	cout << "\n7. New Array-2 after removing the first element: " ; 
	for (int i = 0; i < 9; i++) {
            arr2[i] = arr2[i + 1];
    }
    for (int i = 0; i < 8; i++){
		cout << arr2[i] << ", ";
	}
	
//	8.
	int target;
	cout << "\nEnter value you want to delete: ";
	cin >> target;
	
	bool found3 = false;
	
	cout << "\n8. New Array-2 after removing the given no " << target <<": " ; 
	for (int i = 0; i < 8; i++){
		if (arr2[i] == target){
			found3 =  true;
			if ( arr2[i] == target ){
	    		int targetIndex = i;
	    		for (int j = targetIndex; j < 7; j++) {
         	 	   arr2[j] = arr2[j+1];
       			}
    			for (int k = 0; k < 7; k++){
					cout << arr2[k] << ",";
				}
				cout << endl;
			}
		}
	}
	if (!found3) {
		cout << "The value does not exists!";
	}
	
	return 0;
}




