#include <iostream>
#include <string>
using namespace std;

//using Enums states - in our case the player
enum PlayerStatus //a custom data type
{
	PS_Crouched,
	PS_Standing,
	PS_Walking,
	PS_Running
};

enum MovementStatus
{
	MS_Crouched,
	MS_Running
};

int main()
{

	PlayerStatus status;
	status = PlayerStatus::PS_Running;
	
	system("pause");
}