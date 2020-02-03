#include <iostream>
using namespace std;


int main() {
	
	int valor;
	
	do
	{
		cout << "Introduzca un número entre 1 y 1000: ";
		cin >> valor;
	}while (valor < 1 || valor > 1000);
	
	cout << "Has introducido " << valor;
	
}
