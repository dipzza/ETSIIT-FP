#include <iostream>
using namespace std;

// Ordenar 3 enteros

int main() {
	
	int n1, n2, n3;
	int menor, medio, mayor;
	
	cout << "Introduce el primer n�mero: ";
	cin >> n1;
	
	cout << "Introduce el segundo n�mero: ";
	cin >> n2;
	
	cout << "Introduce el tercer n�mero: ";
	cin >> n3;
	
	if (n1 > n2 && n1 > n3) 
	{
		mayor = n1;
		
		if (n2 >= n3) 
		{
			medio = n2;
			menor = n3;
		}
		else
		{
			medio = n3;
			menor = n2;
		}
	}
	
	else
		if (n2 >= n1 && n2 >= n3) 
		{
			mayor = n2;
			
			if (n1 >= n3)
			{
				medio = n1;
				menor = n3;
			}
			else
			{
				medio = n3;
				menor = n1;
			}
		}
		
		else
		{
			mayor = n3;
			
			if (n2 >= n1)
			{
				medio = n2;
				menor = n1;
			}
			else
			{
				medio = n1;
				menor = n2;
			}
		}
		
	cout << "Los n�meros ordenados de menor a mayor son: " << menor << " " << medio << " " << mayor;
}
