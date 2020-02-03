//Leer 3 enteros e indicar como est�n ordenados 

#include <iostream>
using namespace std;

enum TipoOrden {ascendente, descendente, desordenados};

int main() {
	
	int n1, n2, n3;
	TipoOrden onumeros;
	
	// Entrada
	
	cout << "Introduce el primer n�mero: ";
	cin >> n1;
	
	cout << "Introduce el segundo n�mero: ";
	cin >> n2;
	
	cout << "Introduce el tercer n�mero: ";
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
		cout << "Los n�meros est�n ordenados de forma ascendente";
		
	else
		if (onumeros == descendente)
			cout << "Los n�meros est�n ordenados de forma descendente";
			
		else 
			cout << "Los n�meros no est�n ordenados";
}
