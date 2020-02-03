#include <iostream>
using namespace std;

int main()
{
	for (int i = 4; i > 1; i--)
	{
		for (int j = 1; j < i; j++)
			cout << " ";
		
		cout << "*";
		
		for (int j = 1; j <= 8 - i*2; j++)
		{
			cout << " ";
		}
			
		if (i != 4)
			cout << "*";
		
		cout << endl;
		cout << endl;	
	}
	
	for (int i = 0; i < 8; i++)
		cout << "*";
}
