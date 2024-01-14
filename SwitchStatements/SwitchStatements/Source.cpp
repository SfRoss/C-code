#include <iostream>
#include <string>
using namespace std;

//using enums - enums are great to use in combination with switch statements 
enum PlayerStatus
{
	PS_Running,
	PS_Walking,
	PS_Crouching
};

//declaring our initial values
const float RunSpeed = 800.f;
const float WalkSpeed = 500.f;
const float CrouchSpeed = 350.f;

void UpdateMovementSpeed(PlayerStatus P_Status, float& speed); //this is a function 

void SwitchOnInt(int i);

//main body
int main() 
{
	int integer = 5554; //example of a switch statment using a integer
	
	SwitchOnInt(integer);

	//This part of the code it's using switches with enums
	/*float MovementSpeed; 

	PlayerStatus status = PS_Walking;

	UpdateMovementSpeed(status, MovementSpeed);

	cout << "MovementSpeed = " << MovementSpeed << endl;

	system("pause");*/
}

//updates movement speed using switch statements 
void UpdateMovementSpeed(PlayerStatus P_Status, float& speed)
{
	switch (P_Status)
	{
	case PS_Running:
		speed = RunSpeed;
		break;
	case PS_Walking:
		speed = WalkSpeed;
		break;
	case PS_Crouching:
		speed = CrouchSpeed;

	}
}

void SwitchOnInt(int i)
{
	switch (i)
	{
	case 0:
		cout << "Your number was zero. \n";
		break;
	case 1:
		cout << "Your number was 1. \n";
		break;
	case 2:
		cout << "Your number was two. \n";
		break;
	default:
		cout << "Your number was not 0, 1, or 2. \n";
	}
}