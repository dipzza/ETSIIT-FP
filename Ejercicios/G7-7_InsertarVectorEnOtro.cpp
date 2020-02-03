#include <iostream>
using namespace std;

int main ()
{
	const int MAX = 100;											// Inicialización de variables
	
	int util_v, util_w, posInsertar;
	
	char v[MAX], w[MAX];
	
	
	
	cout << "Introduce el número de valores del 1er vector: ";		// Lectura de los vectores
	cin >> util_v;
	cout << endl;
	
	for (int i = 0; i < util_v; i++)
	{
		cout << "	Introduce el valor nº " << i + 1 << " : ";
		cin >> v[i];
	}
	
	cout << endl << "Introduce el número de valores del 2o vector: ";	
	cin >> util_w;
	cout << endl;
	
	for (int i = 0; i < util_w; i++)
	{
		cout << "	Introduce el valor nº " << i + 1 << " : ";
		cin >> w[i];
	}
	
	cout << endl;
	cout << "Introduce la posición donde introducir el segundo vector: ";
	cin >> posInsertar;
	
	posInsertar -= 1;
	
	
	
	for (int i = util_v - 1; i >= posInsertar; i--)					// Proceso Insertar vector
	{
		v[i + util_w] = v[i];
	}
	
	for (int i = 0; i < util_w; i++)
	{
		v[posInsertar + i] = w[i];
		util_v++;
	}
	
	
	cout << endl << "El vector resultante es: ";					// Salida
	for (int i = 0; i < util_v; i++)
	{
		cout << v[i] << " ";
	}
}
