#include <iostream>
#include <string>
using namespace std;

//example on how to use refrences in c++

void ChangeStr(string& str);

int main()
{
	string myStr = "Druid";

	ChangeStr(myStr);

	cout << myStr << endl;
	

	system("pause");
}

void ChangeStr(string& str)
{
	str += "!";
}


    //string& myRef = myStr;
	//cout << myStr << endl;
	//cout << myRef << endl;
	//myRef += " Mechanics";
	//cout << myStr << endl;
	//cout << myRef << endl;