#include <iostream>
using namespace std;

int main() {
	
	int numero;
	bool multiplomayor = false; 
	
	cout << "Introduzca el n�mero: ";
	cin >> numero;
	
	if (numero > 1000 && numero%5 == 0)
		multiplomayor = true;
		
	if (multiplomayor == true)
		cout << numero << " es mayor que 1000 y es m�ltiplo de 5";
		
	else 
		cout << numero << " No es mayor que 1000 y m�ltiplo de 5";
}
