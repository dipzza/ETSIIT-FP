#include <iostream>
using namespace std;

int main() {
	
	int numero;
	bool multiplomayor = false; 
	
	cout << "Introduzca el número: ";
	cin >> numero;
	
	if (numero > 1000 && numero%5 == 0)
		multiplomayor = true;
		
	if (multiplomayor == true)
		cout << numero << " es mayor que 1000 y es múltiplo de 5";
		
	else 
		cout << numero << " No es mayor que 1000 y múltiplo de 5";
}
