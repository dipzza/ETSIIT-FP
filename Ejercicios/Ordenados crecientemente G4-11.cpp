#include <iostream>
using namespace std;

int main()
{
	int n, valor1, valor2;
	bool ordenadosCre = true;
	
	
	cout << "Introduzca el n� de valores" << endl;
	cin >> n;
	
	
	cout << "Introduce el valor 1 : ";
	cin >> valor1;
	
	for (int i = 1; i < n && ordenadosCre == true; i++)
	{
		cout << "Introduce el valor " << i+1 << " : ";
		cin >> valor2;
		
		if (valor1 > valor2)
			ordenadosCre = false;
		else
			valor1 = valor2;
	}
	
	
	if (ordenadosCre == true)
		cout << "Los n�meros est�n ordenados de forma creciente.";
	else
		cout << "Los n�meros no est�n ordenados de forma creciente.";
	
}
