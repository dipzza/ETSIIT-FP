#include <iostream>
using namespace std;



int main() {

	// Programa que suma los cuadrados de todos los n�meros hasta un mill�n.
	
	/*int i = 100000, suma = 0;

	while (i >= 1){
		
		suma = suma + i*i;
		i--;
	}
	
	cout << "El resultado de la sumatoria es " << suma;/
	*/
	
	// Programa que lee enteros hasta introducir el cero.
	

	int n , i = 0;
	double media = 0;

	cout << "Introduce un n�mero entero: ";
	cin >> n;
	
	while (n != 0){
		
		media = media + n;
		i++;
		
		cout << "Introduce un n�mero entero: ";
		cin >> n;
		
	}
	
	media = media/i;
	
	cout << "La media es " << media;
	
}
