#include <iostream>
using namespace std;

int main ()
{
	
	const int MAX = 100;
	
	int util_v, util_u, v[MAX], u[MAX];
	
	bool iguales = true;
	
	
	do
	{
		cout << "Introduzca el número de valores (entre 1 y " << MAX << "): ";
		cin >> util_v;
	} while (util_v < 1 || util_v > MAX);
	
	
	for (int i = 0;  i < util_v; i++)
	{
		cout << "Introduce el valor entero nº " << i+1 << endl;
		cin >> v[i];
	}
	
	do
	{
		cout << "Introduzca el número de valores (entre 1 y " << MAX << "): ";
		cin >> util_u;
	} while (util_u < 1 || util_u > MAX);
	
	
	for (int i = 0;  i < util_u; i++)
	{
		cout << "Introduce el valor entero nº " << i+1 << endl;
		cin >> u[i];
	}
	
	
	
	if (util_v != util_u)
		iguales = false;
		
	else
	{
		iguales = true;
		
		for (int i = 0; i < util_v && iguales; i++)
		{
			if(v[i]!=u[i])
				iguales = false;
		}
	}
	
	
	if (iguales == true)
		cout << "Los dos vectores son iguales";
	else
		cout << "Los dos vectores son diferentes";
}
