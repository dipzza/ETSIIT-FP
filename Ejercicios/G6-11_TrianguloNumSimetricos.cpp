#include <iostream>
using namespace std;

int main ()
{
	int n;
	
	cout << "Introduce las filas del triángulo : ";
	cin >> n;
	
	cout << endl << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
			cout << " ";
		
		for (int j = i; j > 0 ; j--)
			cout << j % 10;
		
		cout << "0";
		
		for (int j = 1; j <= i ; j++)
			cout << j % 10;
			
		cout << endl;
	}	
}
