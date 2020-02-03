#include <iostream>
#include <cmath>
using namespace std;

// Realiza la media aritm�tica de 3 datos y su desviaci�n t�pica

int main() {
	
	double n1, n2, n3, media, desviacion;
	
	// Entrada
	cout << "Introduce el primer n�mero: ";
	cin >> n1;
	
	cout << "Introduce el segundo n�mero: ";
	cin >> n2;
	
	cout << "Introduce el tercer n�mero: ";
	cin >> n3;
	
	// Proceso
	media = (n1 + n2 + n3)/3;
	
	desviacion = sqrt(((n1 - media) * (n1 - media) + (n2 - media) * (n2 - media) + (n3 - media) * (n3 - media))/3);
	
	// Salida
	cout << "La media aritm�tica de los 3 valores es igual a " << media << endl << "La desviaci�n t�pica de los 3 valores es igual a " << desviacion;

	
	}
