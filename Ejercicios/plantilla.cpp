#include <iostream>
using namespace std;

int main()
{
	int n, i = 1, valor, valoranterior, l = 0, lfinal = 0, p, pfinal;
	
	cout << "Introduce el nº de valores a introducir" << endl;
	cin >> n;
	
	cout << "Introduce le 1er valor: ";
	cin >> valor;
	
	
	while (i < n)
	{
		valoranterior = valor;
		
		cout << "Introduce el valor: ";
		cin >> valor;
		
		p = i;
		l = 1;
		i++;
		
		while (valoranterior <= valor && i < n)
		{
			valoranterior = valor;
			
			cout << "Introduce el valor: ";
			cin >> valor;
			
			l++;
			i++;
		}
		
		if (l > lfinal)
		{
			lfinal = l + 1;
			pfinal = p;
		}
	}
	
	cout << "La secuencia ordenada mayor empieza en el valor de la posición " << pfinal << " y tiene una longitud de " << lfinal << " valores.";
}
