#include <iostream>
#include <string>
using namespace std;

//examples of using strings in C++

int main()
{
	string MyString;

	MyString = "My dog name is ";
	string first = "Spot ";
	string last = "Jones";

	MyString += first;
	MyString += last;
	
	cout << MyString << endl;

	
	

	system("pause");
}

//This is an example of how we used to do it in C - precursor language
//char MyCString[5] = { 'D', 'o', 'g', 's', '\0' };
//cout << MyCString << endl;