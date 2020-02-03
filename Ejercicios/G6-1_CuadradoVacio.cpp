#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 6; i++)
	{
		if (i == 1 || i == 6)
		{
			for (int j = 1; j <= 6; j++)
				cout << "*";
		}
		else
		{
			cout << "*";
				
			for (int j = 2; j <= 5; j++)
				cout << " ";
				
			cout << "*";
		}
		
		cout << endl;
		cout << endl;	
	}
}
