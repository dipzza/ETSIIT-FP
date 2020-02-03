#include <iostream>
using namespace std;

int main ()
{
	const int MAX = 100;
	
	int v[MAX], util_v, l = 0, p = 0, lfinal = 0, pfinal;
	
	bool repetido = false;
	
	
	
	do
	{
		cout << "Introduce el número de valores: ";
		cin >> util_v;
	}while(util_v <= 0 || util_v >= 101);
	cout << endl;
	
	for (int i = 0; i < util_v; i++)
	{
		cout << "	Introduce el valor nº " << i + 1 << " : ";
		cin >> v[i];
	}
	
	
	
	for (int i = 0; i < util_v; i++)
	{
		if (v[i] == 1)
			l++;
			
		else
		{
			if (l > lfinal)
			{
				lfinal = l;
				pfinal = p;
			}
			
			l = 0;
			p = i + 1;
		}
	}
	
	if (l > lfinal)
	{
		lfinal = l;
		pfinal = p;
	}
	
	
	
	cout << endl << "La secuencia de unos más larga comienza en la posición " << pfinal + 1 << " y tiene una longitud de " << lfinal << " valores.";
}
