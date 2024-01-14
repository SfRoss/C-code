#include <iostream>
using namespace std;

//An example of DoWhile Loop
int main()
{
	double NumberPi = 3.14159;
	double NumberE = 2.718281828;

	int count = 0;

	bool Condition = true;

	do
	{
		cout << "The number PI is: " << NumberPi << endl;
		cout << "The number E is: " << NumberE << endl;
		cout << "Count: " << count << endl;
		cout << "Pi + E*count = " << NumberPi + NumberE * count << endl;

		//contional statement - it increments count by one until count is equal or smaller thant 100
		count++;
		if (count <= 100)
		{
			Condition = true;
		}
		else
		{
			Condition = false;
		}

	} while (Condition);



	system("pause");
}