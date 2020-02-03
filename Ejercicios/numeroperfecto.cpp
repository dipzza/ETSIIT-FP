#include <iostream>
using namespace std;

int main() {
	
	int n, i, j, suma, tope;
	
	cout << "Introduzca un tope" << endl;
	cin >> tope;
	
	for (i = 2; i <= tope; i++)
	{
		suma = 0;
		
		for (j = 1; j < i; j++)
		{
			if (i % j == 0)
				suma += j;
		}
		
		if (suma == i)
			cout << i << " es un número perfecto" << endl;
	}
}
