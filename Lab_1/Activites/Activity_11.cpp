
// Write a program that will add two numbers in a function 
// and call that function in main.

#include <iostream>
using namespace std;

int addition (int a, int b)
{
	int r;
	r=a+b;
	return r;
}


int main ()
{
	int z;
	z = addition (5,3);
	cout << "The result is " << z;
}
