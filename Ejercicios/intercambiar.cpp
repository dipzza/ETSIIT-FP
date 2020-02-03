#include <iostream>
using namespace std;

// Intercambia el valor de 2 variables

int main(int argc, char** argv) {
	
	// Definición de variables
	int x = 100, y = 30, tmp;
	
	// Intercambio de valores
	tmp = x;
	x = y;
	y = tmp;
	
	// Salida
	cout << "El valor de x es " << x << " y el valor de y es " << y;
	
	return 0;
}
