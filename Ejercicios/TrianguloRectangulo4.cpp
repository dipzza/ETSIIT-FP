#include <iostream>
using namespace std;

int main()
{
	for (int i = 6; i >= 1; i--)
	{
		for (int j = 1; j <= 6 - i; j++)
			cout << " ";
			
		for (int j = 1; j <= i; j++)
			cout << "*";
		
		cout << endl;	
		cout << endl;
	}
}
