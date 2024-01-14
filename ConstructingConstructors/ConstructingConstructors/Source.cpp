#include <iostream>
#include <string>
using namespace std;


struct Cat //this is a struct
{
	Cat();

	int age;
	float Health;
	
	void Meow(); //this is a function
};

Cat::Cat() // cat constructor - defines what cat is 
{
	cout << "A new cat is born!" << endl;

	age = 3;
	Health = 75.f;
}

void Cat::Meow()
{
	cout << "My age is: " << age << ".\n";
	cout << "My health is: " << Health << ".\n";
}

int main()
{
	Cat cat; //this is a struct

	cat.age += 5;
	
	cat.Meow();

	system("pause");
}









/*lass Dog
{
public: //macking this public in order to be able to call it from our function

	Dog(); //this is a constructor
	
	string Name;
	int Age;
	float Health;

	void Bark();

};


int main()
{
	Dog dog;

	cout << dog.Name << endl;
	cout << dog.Age << endl;
	cout << dog.Health << endl;

	dog.Name = "Sam";
	dog.Age = 14;
	dog.Health = 43.5;

	cout << dog.Name << endl;
	cout << dog.Age << endl;
	cout << dog.Health << endl;

	system("pause");
}

Dog::Dog()
{
	Bark();

	Name = "Default Name";
	Age = 10;
	Health = 100.f;
}

void Dog::Bark() //scope operator
{
	cout << "Woof!" << endl;
}
*/