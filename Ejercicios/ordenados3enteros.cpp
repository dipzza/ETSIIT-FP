//Leer 3 enteros e indicar como están ordenados 

#include <iostream>
using namespace std;

enum TipoOrden {ascendente, descendente, desordenados};

int main() {
	
	int n1, n2, n3;
	TipoOrden onumeros;
	
	// Entrada
	
	cout << "Introduce el primer número: ";
	cin >> n1;
	
	cout << "Introduce el segundo número: ";
	cin >> n2;
	
	cout << "Introduce el tercer número: ";
	cin >> n3;
	
	//Proceso
	
	if (n1 > n2 && n2 > n3)
		onumeros = ascendente;
		
	else
		if (n3 > n2 && n2 > n1)
			onumeros = descendente;
		
		else
			onumeros = desordenados;
			
	//Salida
	
	if (onumeros == ascendente)
		cout << "Los números están ordenados de forma ascendente";
		
	else
		if (onumeros == descendente)
			cout << "Los números están ordenados de forma descendente";
			
		else 
			cout << "Los números no están ordenados";
}
