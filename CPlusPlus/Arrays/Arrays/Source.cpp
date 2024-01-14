#include <iostream>
using namespace std;

//examples of arrays
int main()
{
	int MyArray[6] = {1, 23, 5, 4, 9, 21}; //using an array with a list and a for loop

	for (int i = 0; i < 6; i++) //using a for lop makes the code a loat simpler, cleaner and easy to read
	{
		cout << "MyArray[" << i << "] = " << MyArray[i] << endl;
	}
	
	
	system("pause");
}


// Commented out and moved outside the code for the code to look cleaner but kept it for reference. 
/*int MyArray[6] = {1, 23, 5, 4, 9, 21}; //using an array with a list

	cout << "MyArray[0] = " << MyArray[0] << endl;
	cout << "MyArray[1] = " << MyArray[1] << endl;
	cout << "MyArray[2] = " << MyArray[2] << endl;
	cout << "MyArray[3] = " << MyArray[3] << endl;
	cout << "MyArray[4] = " << MyArray[4] << endl;
	cout << "MyArray[5] = " << MyArray[5] << endl;*/

	//using a for loop with an array to print the index of some values
	/*int MyIntArray[10];

	for (int i = 0; i < 10; i++)
	{
		MyIntArray[i] = i;
		//cout << MyIntArray[i] << endl;
	}

	cout << "The first element in MyIntArray is : " << MyIntArray[0] << endl;

	cout << "The fifth element: " << MyIntArray[4] << endl;*/