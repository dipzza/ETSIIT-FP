#include <iostream>
using namespace std;

int main ()
{
	const int MAX = 100;
	double notas [MAX], posmayor;
	int util_notas;
	
	do
	{
		cout << "Introduzca el número de alumnos (entre 1 y " << MAX << "): ";
		cin >> util_notas;
	} while (util_notas < 1 || util_notas > MAX);
	
	
	for (int i = 0; i < util_notas; i++)
	{
		cout << "Introduzca el dato nº " << i + 1 << ": ";
		cin >> notas[i];
	}
	
	mayor = notas[0];
	
	for (int j = 1; j < util_notas; j++)
	{
		if (notas[j] > mayor)
			posmayor = j;		
	}
	
	cout << "El mayor esta en la posición " << posmayor << " y vale " notas[posmayor];
}
