#include <iostream>
using namespace std;

int main ()
{
	const int MAX = 100;
	
	int v[MAX], util_v, mayor;
	
	bool esPrimo = true, primoEncontrado = false;
	
	
	cout << "Introduce el número de valores: ";
	cin >> util_v;
	
	for (int i = 0; i < util_v; i++)
	{
		cout << "Introduce el valor nº " << i + 1 << " : ";
		cin >> v[i];
	}
	
	
	for (int i = 0; i < util_v; i++)
	{
		for (int j = 2; j <= v[i] && esPrimo == true; j++)
		{
			if (v[i] % j == 0)
				esPrimo = false;
		}
		
		if (esPrimo == true)
		{
			if (primoEncontrado == false)
			{
				mayor = v[i];
				primoEncontrado = true;
			}
			
			else
			{
				if (v[i] > mayor)
					mayor = v[i];
			}
		}
		
		esPrimo = true;
	}
	
	
	cout << "El mayor primo es " << mayor;
}
