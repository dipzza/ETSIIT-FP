#include <iostream>
using namespace std;

// Leer un entero positivo y mostrar por pantalla si es par o impar

int main() {
	
	/*int n, resto;
	
	cout << "Introduce un número entero positivo: ";
	cin >> n;
	
	resto = n % 2;
	
	if (n > 0) {
		
		if (resto == 0)
		   cout << n << " es par";
		else 
		   cout << n << " es impar";
	}
	else 
		cout << "Tienes que introducir un número positivo"; */
	
	
	int n;
	bool esPar;
	
	cout << "Introduce un número entero positivo: ";
	cin >> n;
	
	esPar = (n % 2 == 0);
	
	if (n > 0) {
		
		if (esPar)
		   cout << n << " es par";
		else 
		   cout << n << " es impar";
	}
	else 
		cout << "Tienes que introducir un número positivo";
}
