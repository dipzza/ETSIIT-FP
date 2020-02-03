#include <iostream>
using namespace std;

int main ()
{
	const int MAX = 100;															// Declaración de variables
	
	int v[MAX], util_v, n;
	
	
	do																				// Lectura
	{
	cout << "Introduce un número natural para calcular los primos menor que el: ";
	cin >> n;
	} while (n > MAX + 2 || n < 2);
	
	
	util_v = n - 2;																	// Proceso
	
	for (int i = 0; i < util_v; i++)													// Relleno de vector
	
		v[i] = i + 2;
	
	for (int i = 0; i < util_v; i++)													// Eliminación de valores no primos
	
		for (int j = i + 1; j < util_v; j++)
		
			if (v[j] % v[i] == 0)
			{
				for (int k = j; k < util_v; k++)
				
					v[k] = v[k + 1];
				
				util_v--;
			}
	
	
	cout << endl;																	// Salida
	
	for (int i = 0; i < util_v; i++)
	{
		cout << v[i] << " ";
	}
}
