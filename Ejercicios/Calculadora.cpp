#include <iostream>
using namespace std;

int main() {
	
	int a, b, resultado;
	char tipo;
	bool operacion = true;
	
	cout << "Introduce el primer valor: ";
	cin >> a;
	
	cout << "Indique el tipo de operación:" << endl << "-S (sumar) -R (restar) -M (multiplicar) -D (dividir)" << endl;
	cin >> tipo;
	
	cout << "Introduce el segundo valor: ";
	cin >> b;
	
	if (tipo == 'S')
		resultado = a+b;
	else 
	{
		if (tipo == 'R')
			resultado = a-b;
		else
		{
			if (tipo == 'M')
				resultado = a*b;
			else
			{
				if (tipo == 'D')
					resultado = a/b;
				else
					operacion = false;
			}
		}
	}
	
	if (operacion == true)
		cout << "El resultado es " << resultado;
	else
		cout << "Has introducido una opción incorrecta";
}
