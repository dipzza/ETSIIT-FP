// Este programa acepta dos datos de los catetos de un tri�ngulo rect�ngulo y calcula su hipotenusa

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) { 
	
	// Declaraci�n de variables
	
	double h, l1, l2;
	
	// Leer datos
	
	cout << "Introducir el primer cateto: ";
	cin >> l1;
	
	cout << "Introducir el segundo cateto: ";
	cin >> l2;
	
	// Proceso de datos
	
	h = sqrt(l1*l1 + l2*l2);
	
	// Salida
	
	cout << "La hipotenusa del tri�ngulo es " << h;
	
	
	return 0;
}
