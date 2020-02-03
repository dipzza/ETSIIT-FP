#include <iostream>
using namespace std;

// Leer cuatro reales y mostrar por pantalla el mayor de ellos.

int main() {
	
	double n1, n2, n3, n4, mayor;
	
	cout << "Introduce el 1er número: ";
	cin >> n1;
	
	cout << "Introduce el 2o número: ";
	cin >> n2;
	
	cout << "Introduce el 3er número: ";
	cin >> n3;
	
	cout << "Introduce el 4o número: ";
	cin >> n4;

	if (n1 >= n2 && n1 >= n3 && n1 >= n4)
		mayor = n1;
		
	if (n2 >= n1 && n2 >= n3 && n2 >= n4)
		mayor = n2;
		
	if (n3 >= n1 && n3 >= n2 && n3 >= n4)
		mayor = n3;
		
	if (n4 >= n1 && n4 >= n2 && n4 >= n3)
		mayor = n4;
		
	cout << mayor << " es el número más grande";
}
