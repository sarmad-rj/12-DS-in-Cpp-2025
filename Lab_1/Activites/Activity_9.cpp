// Write a program to use do-while loop in C++

#include <iostream>
//#include <string>

using namespace std;
int main ()
{
	string str;
	
	do {
		cout << "Enter text: ";
		getline (cin,str);
		cout << "You entered: " << str << '\n';
	} while (str != "goodbye");
	
}




