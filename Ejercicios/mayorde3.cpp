#include <iostream>
using namespace std;

// Leer tres reales y mostrar por pantalla el mayor de ellos.

int main() {
	
	double n1, n2, n3, mayor;
	
	cout << "Introduce el 1er número: ";
	cin >> n1;
	
	cout << "Introduce el 2o número: ";
	cin >> n2;
	
	cout << "Introduce el 3er número: ";
	cin >> n3;
	
	
/*	if (n1 >= n2)
		mayor = n1;
	else
		mayor = n2;
		
	if (n3 > mayor)
		mayor = n3;
*/

	if (n1 >= n2 && n1 >= n3)
		mayor = n1;
		
	if (n2 >= n1 && n2 >= n3)
		mayor = n2;
		
	if (n3 >= n1 && n3 >= n2)
		mayor = n3;
		
	cout << mayor << " es el número más grande";
}
