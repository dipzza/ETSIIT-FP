#include <iostream>
#include <cmath>
using namespace std;

// Realiza la media aritmética de 3 datos y su desviación típica

int main() {
	
	double n1, n2, n3, media, desviacion;
	
	// Entrada
	cout << "Introduce el primer número: ";
	cin >> n1;
	
	cout << "Introduce el segundo número: ";
	cin >> n2;
	
	cout << "Introduce el tercer número: ";
	cin >> n3;
	
	// Proceso
	media = (n1 + n2 + n3)/3;
	
	desviacion = sqrt(((n1 - media) * (n1 - media) + (n2 - media) * (n2 - media) + (n3 - media) * (n3 - media))/3);
	
	// Salida
	cout << "La media aritmética de los 3 valores es igual a " << media << endl << "La desviación típica de los 3 valores es igual a " << desviacion;

	
	}
