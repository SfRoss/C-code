#include <iostream>
#include <string>
using namespace std;

struct Container
{
	string Name;


	int X;
	int Y;
	int Z;
};


int main()
{
	Container container = { "San", 5, 6, 7 }; 

	Container* PtrToCont = &container;

	cout << (*PtrToCont).Name << endl;
	
	cout << PtrToCont->Name << endl; //using -> as sugar notation - syntactic sugar




	/*int numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //integer array initialized to a list;

	int* NumPtr = numbers; 

	cout << *NumPtr << endl;

	NumPtr++; //we can use increment or decrement in order to move our pointer to the next element

	cout << *NumPtr << endl;

	NumPtr++;

	cout << *NumPtr << endl;

	NumPtr += 3;
	cout << *NumPtr << endl; //this is called pointer arithmetic 
	*/



	/*int a = 100;

	int* aPtr; //points to int
	aPtr = &a; //we use the return operator to get the hexadecimal address stored in memory for int a;

	cout << aPtr << endl; //we can also use star a pointer in order to get the value stored in a by dereferencing - used bellow as ex;

	int b = 50;

	aPtr = &b;
	cout << *aPtr << endl; //if we remove the the * we get the hexadecimal address;
	*/

	system("pause");
}