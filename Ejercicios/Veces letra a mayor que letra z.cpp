#include <iostream>
using namespace std;

int main()
{
	char letra;
	int a = 0, z = 0;
	
	
	for(int i = 1; i <= 20; i++)
	{
		cout << "Introduce la letra nº " << i << endl;
		cin >> letra;
		
		if (letra == 'a')
			a++;
		
		if (letra == 'z')
			z++;
	}
	
	
	if (a == 0)
	{
		cout << "No se ha introducido ninguna letra a";
		
		if (z == 0)
			cout << "No se ha introducido ninguna letra a, ni letra z";
	}
	else
	{
		if (z == 0)
			cout << "No se ha introducido ninguna letra z";
		else
		{
			if (a > z)
				cout << "El nº de veces que se ha introducido 'a' es mayor al nº de veces que se ha introducido 'z'";
				
			else
				cout << "El nº de veces que se ha introducido 'a' no es mayor al nº de veces que se ha introducido 'z'";
		}
	}
}
