#include <iostream>
using namespace std;

enum Signo {positivo,negativo,cero};

//Leer entero y decir si es positivo, negativo o cero.

int main() {
	
	int numero;
	Signo tn;
	
	cout << "Introduce el número: ";
	cin >> numero;
	
	//Proceso
	if (numero > 0)
		tn = positivo;
	
	else
	
		if (numero < 0)
			tn = negativo;
		
		else
			tn = cero;
			
	//Salida
	if (tp == positivo)
		cout << "El " << numero << " es positivo.";
		
	else
		if (tp == negativo)
			cout << "El " << numero << " es negativo.";
		
		else
			if (tp == cero)	
				cout << "El " << numero << " es cero.";
}
