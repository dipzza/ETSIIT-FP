#include <iostream>
using namespace std;

int main ()
{
	const int MAX = 100;											// Inicialización de variables
	
	int util_v, util_w, util_un = 0, util_in = 0;
	
	char v[MAX], w[MAX], un[MAX], in[MAX];
	
	bool repetido = false;
	
	
	
	cout << "Introduce el número de valores del 1er vector: ";		// Lectura de 2 vectores
	cin >> util_v;
	
	for (int i = 0; i < util_v; i++)
	{
		cout << "Introduce el valor nº " << i + 1 << " : ";
		cin >> v[i];
	}
	
	
	cout << "Introduce el número de valores del 2o vector: ";
	cin >> util_w;
	
	for (int i = 0; i < util_w; i++)
	{
		cout << "Introduce el valor nº " << i + 1 << " : ";
		cin >> w[i];
	}
	
	
	
	for (int i = 0; i < util_v; i++)								// Procesamiento del vector Intersección
	{
		for (int j = 0; j < util_w && repetido == false; j++)
		{
			if (v[i] == w[j])
			{
				repetido = true;
				in[util_in] = v[i];
				util_in++;
			}
		}
		
		repetido = false;
	}
	
	
	for (int i = 0; i < util_v; i++)								// Procesamiento del vector Unión
	{
		un[i] = v[i];
		util_un++;
	}
	
	for (int i = 0; i < util_w; i++)
	{
		for (int j = 0; j < util_un && repetido == false; j++)
		{
			if (w[i] == un[j])
				repetido = true;
		}
		
		if (repetido == false)
		{
			un[util_un] = w[i];
			util_un++;
		}
		
		repetido = false;
	}
	
	
	
	cout << "El vector intersección es: ";							// Salida
	for (int i = 0; i < util_in; i++)
	{
		cout << in[i] << " ";
	}
	
	cout << "El vector unión es: ";
	for (int i = 0; i < util_un; i++)
	{
		cout << un[i] << " ";
	}
}
