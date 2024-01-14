#include <iostream>
using namespace std;

class Object
{
public:
	virtual void BeginPlay(); //using virtual so we can overwrite BeginPlay()
};

class Actor : public Object
{
public:
	virtual void BeginPlay() override; //using virtual just for tracking purposes - the virtual is inherited from the parent - using ovveride with it, helps us even more to understand that this is an override
};

class Pawn : public Actor
{
public:
	virtual void BeginPlay() override;
};

int main()
{
	//Object* obj = new Object;
	//obj->BeginPlay();

	//Actor* act = new Actor;
	//act->BeginPlay();

	Pawn* pwn = new Pawn;
	pwn->BeginPlay();

	delete pwn;
	//delete act;
	//delete obj;
	system("pause");
}

void Object::BeginPlay()
{
	cout << "Object BeginPlay() called. \n";
}

void Actor::BeginPlay()
{
	cout << "Actor BeginPlay() called. \n";
	Object::BeginPlay();
}

void Pawn::BeginPlay()
{
	cout << "Pawn BeginPlay() called. \n";
	Object::BeginPlay();
	Actor::BeginPlay();
}