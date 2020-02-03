#include <iostream>
#include <cmath>
using namespace std;

// Leer dos complejos y mostrar el complejo con mayor modulo

int main() {
	
	double r1, i1, r2, i2, modulo1, modulo2;
	
	cout << "Introduce la parte real del 1er número complejo: ";
	cin >> r1;
	
	cout << "Introduce la parte imaginaria del 1er número complejo: ";
	cin >> i1;
	
	cout << "Introduce la parte real del 2o número complejo: ";
	cin >> r2;
	
	cout << "Introduce la parte imaginaria del 2o número complejo: ";
	cin >> i2;

	modulo1 = sqrt(r1*r1 + i1*i1);
	modulo2 = sqrt(r2*r2 + i2*i2);
	
	if (modulo1 > modulo2)
		cout << r1 << " + " << i1 << "i es el complejo con mayor módulo";
	else
		cout << r2 << " + " << i2 << "i es el complejo con mayor módulo";	
}
