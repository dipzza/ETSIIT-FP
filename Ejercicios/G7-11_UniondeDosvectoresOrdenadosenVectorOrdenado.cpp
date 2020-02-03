#include <iostream>
using namespace std;

int main ()
{
	const int MAX = 100;											// Inicialización de variables
	
	int util_v, util_w, util_un, intercambia;
	
	double v[MAX], w[MAX], un[MAX];
	
	bool cambio = true;
	
	
	do																// Lectura de los dos vectores
	{
		cout << "Introduce el número de valores del 1er vector: ";
		cin >> util_v;
	}while(util_v <= 0 || util_v > MAX);
	cout << endl;
	
	for (int i = 0; i < util_v; i++)
	{
		cout << "	Introduce el valor nº " << i + 1 << " : ";
		cin >> v[i];
	}
	
	do
	{
		cout << "Introduce el número de valores del 2o vector: ";
		cin >> util_w;
	}while(util_w <= 0 || util_w > MAX);
	cout << endl;
	
	for (int i = 0; i < util_w; i++)
	{
		cout << "	Introduce el valor nº " << i + 1 << " : ";
		cin >> w[i];
	}
	
	
	
	util_un = util_v + util_w;
	
	for (int i = 0; i < util_v; i++)
	{
		un[i] = v[i];
	}
	
	for (int i = util_v; i < util_un; i++)								
	{
		un[i] = w[i - util_v];
	}
	
	for (int ord = 0; ord < util_un && cambio; ord++)
	{
		cambio = false;
		
		for (int i = util_un - 1; i > ord; i--)
		{
			if (un[i] < un[i - 1])
			{
				intercambia = un[i];
				un[i] = un[i-1];
				un[i-1] = intercambia;
				cambio = true;
			}
		}
	}
	
	
	cout << "\nEl vector resultante es: ";					// Salida
	for (int i = 0; i < util_un; i++)
	{
		cout << un[i] << " ";
	}
}
