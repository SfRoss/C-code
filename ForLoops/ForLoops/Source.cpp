#include <iostream>
using namespace std;


//for loops example - nesting for loops
int main()
{

	for (int i = 0; i <= 10; i++)
	{
		for (int j = 0; j <= 10; j++)
		{
			for (int k = 0; k <= 10; k++)
			{
				cout << "i = " << i << ", j = " << j << ", k = " << k << endl;
			}
		}
	}

	cout << endl;

	system("pause");
}