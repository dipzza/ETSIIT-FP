#include <iostream>
using namespace std;

int main()
{
	int i, j, pares = 0;
	
	cout << "Introduce el n�mero inicial" << endl;
	cin >> i;
	
	cout << "Introduce el n�mero final" << endl;
	cin >> j;
	
	
	for (i; i <= j; i++)
	{
		if (i % 2 == 0)
			pares++;
	}
	
	
	cout << "El n�mero de pares es " << pares;
}
