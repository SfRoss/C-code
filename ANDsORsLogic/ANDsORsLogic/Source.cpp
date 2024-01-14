#include <iostream>
using namespace std;

//examples of how to use AND and OR operators
int main()
{
	int i = 1;
	int j = 2;
	int k = 3;

	
	//This code will print because the first statement is true and the OR reqiures one of the other to be true
	if (i <= k || i == j)
	{
		cout << "This will be printed." << endl;
	}
	

	system("pause");
}


//Commented out and moved outside the code for the code to look cleaner but kept it for reference. 
// this code is doing the same thing as the if above that is using the &&(AND) operator
  /*if (i <= k)
  {
	  cout << "This will be printed. " << endl;
  }
  if (i < j)
  {
	  cout << "This will be printed. " << endl;
  }
  */


//This code will never be printed - both statements are false
	/*if (i == k || i == j)
	{
		cout << "This will never be printed.";
	}
	*/

	//This code evalutes to FALSE - because j is not equal to k 
	/*if ((i <= k && i < j) && (j == k))
	{
		cout << "This will never be printed. " << endl;
	}
	*/

	//This code  evaluates to TRUE - because all statements are true
	/*if ((i <= k && i < j) && (j <= k))
	{
		cout << "This will be printed. " << endl;
	}
	*/
  
