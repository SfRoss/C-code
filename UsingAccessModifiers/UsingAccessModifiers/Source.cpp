#include <iostream>
#include <string>
using namespace std;

class Creature
{
public:
	Creature();

	void SetName(string name); //using getters and setters in order to access private variables
	string GetName();

	float GetHealth();

	void TakeDamage(float damage);

private:
	string Name; 
	float Health;

protected:
	int NumberOfLimbs;

};


class Goblin : public Creature
{
public:
	Goblin();

	int GetNumberOfLimbs();
};

int main()
{
	Goblin Goblino;
	
	cout << Goblino.GetName() << endl;
	cout << Goblino.GetNumberOfLimbs() << endl;
	
	
	/*Creature Igor;
	Igor.SetName("Igor");

	cout << "Name: " << Igor.GetName() << endl;
	cout << "Health: " << Igor.GetHealth() << endl;

	cout << "Igor wil now take 35 damage!" << endl;

	Igor.TakeDamage(35.0);
	*/


	system("pause");
}

Creature::Creature()
{
	Health = 100.f;
	cout << "A creature has been created!\n";
}

void Creature::SetName(string name)
{
	Name = name;
}

string Creature::GetName()
{
	return Name;
}

float Creature::GetHealth()
{
	return Health;
}

void Creature::TakeDamage(float damage)
{
	float Total;
	Total = Health - damage;

	if (Total <= 0.f)
	{
		cout << GetName() << " hasd died\n";
	}
	else
	{
		Health -= damage;
	}

	cout << "Health: " << Health << endl;

}

Goblin::Goblin()
{
	NumberOfLimbs = 5;

	SetName("Goblino");

}

int Goblin::GetNumberOfLimbs()
{
	return NumberOfLimbs;
}