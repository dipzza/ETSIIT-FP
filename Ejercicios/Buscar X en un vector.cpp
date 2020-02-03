#include<iostream>
using namespace std;

//Leer un vector de dobles y un double x. Buscar x en el vector

int main ()
{
	
	const int MAX = 100;
	
	int util_v, i = 0;
	
	double v[MAX], x;
	
	bool encontrado = false;
	
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
	
	cout << "Introduzca el valor a buscar: ";
	cin >> x;
	
	while (!encontrado && i < util_v)
	{
		if (v[i] == x)	
			encontrado = true;
		else
			i++;
	}
	
	if (encontrado)
		cout << "Se ha encontrado x en la posición " << i + 1;
	else
		cout << "No ta";
}
