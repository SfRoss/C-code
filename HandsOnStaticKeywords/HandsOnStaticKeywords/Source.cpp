#include <iostream>
using namespace std;

class Critter
{
public:

	Critter()
	{
		cout << "A critter is born!\n";
		++CritterCount;
	}

	static void AnnounceCount()
	{
		cout << CritterCount << endl;
	}
	static int CritterCount; //static variables need to be initilize outside the class
};

int Critter::CritterCount = 0;

int main()
{
	Critter::AnnounceCount();
	
	Critter* crit = new Critter;
	Critter::AnnounceCount();
	delete crit;

	system("pause");
}






/*
class Item
{
public:
	Item()
	{
		cout << "An item has been created!\n";
	}
	~Item()
	{
		cout << "An Item has been destroyed!\n";
	}
};

int main()
{
	{
		static Item item;
	}
	system("pause");
}*/



/*void AddToCount()
{
	static int count = 0; //can't re-initialize static variables
	count++;
	cout << count << endl;
}


int main()
{
	for (int i = 0; i < 100; i++)
	{
		AddToCount();
	}

	system("pause");
}*/