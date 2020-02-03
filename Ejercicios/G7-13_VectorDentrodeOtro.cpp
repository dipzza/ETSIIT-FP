#include <iostream>
using namespace std;

int main ()
{
	const int MAX = 100;																			// Inicialización de variables
	
	int util_v, util_w, pos;
	
	double v[MAX], w[MAX];
	
	bool dentro = false;
	
	
	do																								// Lectura de los dos vectores
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
	
	cout << endl;
	
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
	
	
	
	for (int i = 0; i < util_v && dentro == false; i++)												// Proceso
	{
		if (v[i] == w[0])
		{
			pos = i + 1;
			
			dentro = true;
			
			for (int j = 0; j < util_w && dentro == true; j++)
			{
				if (v[i + j] != w[j])
					dentro = false;
			}
		}
	}
	
	
	
	if (dentro)
		cout << endl << "El vector B se encuentra dentro de A. B dentro de A comienza en la posición " << pos;		// Salida
	else
		cout << endl << "El vector B no se encuentra dentro de A.";
}
