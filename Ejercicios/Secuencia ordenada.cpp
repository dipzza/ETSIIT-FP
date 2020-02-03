#include <iostream>
using namespace std;

int main()
{
	int n, valor = 0, valoranterior, l = 1, lfinal = 0, p = 1, pfinal = 1;
	
	cout << "Introduce el nº de valores a introducir" << endl;
	cin >> n;
	
	cout << "Introduce el valor: ";
	cin >> valor;

	for (int i = 1; i < n; i++)
	{
		valoranterior = valor;
		
		cout << "Introduce el valor: ";
		cin >> valor;
		
		if (valoranterior <= valor)
		{
			l++;
		}
			
		else
		{
			if (l > lfinal)
			{
				lfinal = l;
				pfinal = p;	
			}
				
			p = i +1;
			l = 1;	
		
		}
	}
	
	if (l > lfinal)
	{
		lfinal = l;
		pfinal = p;
	}

	cout << "La secuencia ordenada mayor empieza en el valor de la posición " << pfinal << " y tiene una longitud de " << lfinal << " valores.";
}
