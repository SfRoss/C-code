#include <iostream>
#include <string>
using namespace std;

class Animal //this is our object
{
public:
	Animal(); //this is our constructor
	Animal(string name, int age, int num_limbs); //constructor overload 

	string Name;
	int Age;
	int NumberOfLimbs;

	void Report();
};

class Dog : public Animal //a class that inherits everything from Animal 
{
public:
	Dog();
	Dog(string name, int age, int num_limbs);

	void Speak();
};

class Corgi : public Dog //inherits all of the trais from the Dog class and animal
{

};


int main() //this stores our report function that is called out - main function
{
	/*Dog dog("Spot", 4, 5);
	
	dog.Speak();*/
	
	Corgi corgi; //I use inheritance to pass down what we build in Animal, Dog and Report to call what I need

	corgi.Speak();
	corgi.Report();
	
	/*Animal animal; //keep in mind, animal in our case is a custom data type

	animal.Report();

	Animal animal_2("Cheetah", 7, 5);*/

	system("pause");
}

Animal::Animal() //this defines constructor
{
	cout << "An animal is born!\n";

	Name = "Default";
	Age = 2;
	NumberOfLimbs = 4;
}

Animal::Animal(string name, int age, int num_limbs)
	: Name(name), Age(age), NumberOfLimbs(num_limbs) //this is doing what the code bellow is doing is just using a different way to initilize it
{

	Report();
	/*Name = name;
	Age = age;
	NumberOfLimbs = num_limbs;*/
}

void Animal::Report() //send a report to the screen with the details provided in it
{
	cout << endl;
	cout << "Name: " << Name << endl;
	cout << "Age: " << Age << endl;
	cout << "NumberOfLimbs: " << NumberOfLimbs << endl;
	cout << endl;
}

Dog::Dog()
{
	cout << "A Dog is born!\n";
}

Dog::Dog(string name, int age, int num_limbs) : Animal(name, age, num_limbs) //this format calls only on the constructor I want - I don't call the "Animal() constructor" that takes 0 input parameters
{
	//Animal(name, age, num_limbs) - this way we also call the Animal() constructor that is taking 0 inputs
}

void Dog::Speak()
{
	cout << "Woof!\n";
}