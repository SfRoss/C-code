#include <iostream>
#include <string>
using namespace std;

class Dog //example of how to setup a class
{
	string Name;
	int Age;
	float Health;

	void Bark()
	{
		cout << "Woof!" << endl;
	}
};

int main()
{
	Dog Spot;
	Dog Rex;

	system("pause");
}