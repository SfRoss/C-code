#include <iostream>
#include <string>
using namespace std;

struct Character
{
	Character(); //Constructor - sets our default values for our variables

	void PrintHealth();

	string Name;
	float Health;
};

Character::Character()
{
	Name = "Default Name";
	Health = 100.f;

}

void Character::PrintHealth() //this is a function - need to use the return type;
{
	cout << "Health = " << Health << endl;
}

int main()
{
	for (int i = 0; i < 10; i++)
	{
		Character* PtrToChar = new Character();

		cout << PtrToChar->Name << endl;

		PtrToChar->PrintHealth();

		delete PtrToChar; //Adding delete in order to detele the object after creation - this is done in order to free memory - without this, our program is going to crash
	}



	system("pause");
}