#include <iostream>
using namespace std;

int main()
{
	int n, i, mayor, segundomayor, tmp;
	
	cout << "Introduce la cantidad de n�meros a procesar" << endl;
	cin >> n;
	
	cout << "Introduce el valor n� 1" << endl;
	cin >> mayor;
	
	segundomayor = mayor;
	
	
	for (i = 2; i <= n; i++)
	{
		cout << "Introduce el valor n� " << i << endl;
		cin >> tmp;
		
		if (tmp >= mayor)
		{
			segundomayor = mayor;
			mayor = tmp;	
		}
		else
		{
			if (tmp > segundomayor)
				segundomayor = tmp;	
		}
	}
	
	
	cout << "El segundo valor mayor es " << segundomayor;
}
