#include<iostream>
using namespace std;

//Leer un vector de enteros y genere otro vector con los pares del primero.

int main ()
{
	
	const int MAX = 1000;
	
	int v[MAX], vpar[MAX], util_v, util_vpar = 0;
	
	do
	{
		cout << "Introduzca el número de alumnos (entre 1 y " << MAX << "): ";
		cin >> util_v;
	} while (util_v < 1 || util_v > MAX);
	
	
	for (int i = 0;  i < util_v; i++)
	{
		cout << "Introduce el valor entero nº " << i+1 << endl;
		cin >> v[i];
	}
	
	
	for (int i = 0; i < util_v; i++)
	{
		if (v[i] % 2 == 0)
		{
			vpar[util_vpar] = v[i];
			util_vpar++	;
		}
	}
	
	cout << "Los valores pares son:" << endl;
	
	for (int i = 0; i < util_vpar; i++)
	{
		cout << vpar[i] << endl;
	}
}
