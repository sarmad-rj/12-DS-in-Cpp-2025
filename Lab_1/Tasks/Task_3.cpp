#include <iostream>
using namespace std;

int main() {
    cout << "The Array: ";
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    
    for (int i = 0; i < 10; ++i) {
        cout << arr[i];
        if (i < 9) cout << ", ";
    }
	int target; 
	bool found = false;
	cout << "\nEnter the value to search: ";
	cin >> target;
	
	for (int i = 0; i < 10; ++i) {
        if (arr[i]  == target){
        	found = true;
        	cout << "\nValue found at index " << i ;
		} 
    }
    
    if (!found){
    	cout<<"\nThis value does not exists!";
	}

    return 0;
}
