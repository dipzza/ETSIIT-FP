#include <iostream>
using namespace std;

// Leer cuatro reales y mostrar por pantalla el mayor de ellos.

int main() {
	
	double n1, n2, n3, n4, mayor;
	
	cout << "Introduce el 1er n�mero: ";
	cin >> n1;
	
	cout << "Introduce el 2o n�mero: ";
	cin >> n2;
	
	cout << "Introduce el 3er n�mero: ";
	cin >> n3;
	
	cout << "Introduce el 4o n�mero: ";
	cin >> n4;

	if (n1 >= n2 && n1 >= n3 && n1 >= n4)
		mayor = n1;
		
	if (n2 >= n1 && n2 >= n3 && n2 >= n4)
		mayor = n2;
		
	if (n3 >= n1 && n3 >= n2 && n3 >= n4)
		mayor = n3;
		
	if (n4 >= n1 && n4 >= n2 && n4 >= n3)
		mayor = n4;
		
	cout << mayor << " es el n�mero m�s grande";
}
