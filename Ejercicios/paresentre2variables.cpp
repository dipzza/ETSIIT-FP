#include <iostream>
using namespace std;

int main()
{
	int i, j, pares = 0;
	
	cout << "Introduce el número inicial" << endl;
	cin >> i;
	
	cout << "Introduce el número final" << endl;
	cin >> j;
	
	
	for (i; i <= j; i++)
	{
		if (i % 2 == 0)
			pares++;
	}
	
	
	cout << "El número de pares es " << pares;
}
