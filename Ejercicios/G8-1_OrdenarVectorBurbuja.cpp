#include <iostream>
using namespace std;

int main()
{
	const int MAX = 100;																			// Declaración de variables
	
	int v[MAX], util_v, tmp, x, izda = 0, dcha, centro, pos;
	
	bool cambio = true, encontrado = false;
	
	
	do																									// Lectura de vector y elemento a buscar
	{
		cout << "Introduce el número de elementos del vector: ";
		cin >> util_v;
		cout << endl;
	} while(util_v < 1 || util_v > MAX);
	
	for (int i = 0; i < util_v; i++)
	{
		cout << "	Introduce el elemento del vector nº " << i << " : ";
		cin >> v[i];	
	}
	
	cout << "\nIntroduce el elemento que quieres buscar: ";
	cin >> x;
	
	
	for (int izqd = 0; izqd < util_v && cambio; izqd++)								// Proceso
	{																										// Ordenación por burbuja
		cambio = false;
		
		for (int j = util_v - 1; j > izqd; j--)
		{
			if (v[j] < v[j - 1])
			{
				tmp = v[j - 1];
				v[j - 1] = v [j];
				v[j] = tmp;
				
				cambio = true;	
			}
		}
	}
	
	dcha = util_v - 1;
	
	while (izda <= dcha && !encontrado)															// Busqueda binaria
	{
		centro = (izda + dcha) / 2;
		
		if (v[centro] == x)
		{
			encontrado = true;
			pos = centro;
		}
		else
		{
			if (x > v[centro])
				izda = centro + 1;
			else
				dcha = centro - 1;
		}
	}																										
	
	
	cout << endl;																					// Salida
	for (int i = 0; i < util_v; i++)
		cout << v[i] << " ";	
		
	cout << "\n\nEl elemento buscado está en la posición " << pos << ".";
}
