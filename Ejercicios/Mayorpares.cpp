#include <iostream>
using namespace std;


int main() {
	
	/* int n, mayor, i = 1;
	
	cout << "Introduce el número: ";
	cin >> mayor;
	
	while (i <= 3)
	{
		cout <<"Introduce el siguiente número: ";
		cin >> n;
		
		if (n%2 == 0 && n > mayor)
			mayor = n;
			
		i++;
		
	}
	
	cout << "El número par mayor es " << mayor; */
	
	int n1, n2, n3, n4, mayor = 1;
	bool n1par = false, n2par = false, n3par = false, haypar = false;
	
	
	cout << "Introduce el primer número" << endl;
	cin >> n1;
	
	cout << "Introduce el segundo número" << endl;
	cin >> n2;
	
	cout << "Introduce el tercer número" << endl;
	cin >> n3;
	
	cout << "Introduce el cuarto número" << endl;
	cin >> n4;
	
	
	if (n1 % 2 == 0)
	{
		haypar = true;
		n1par = true;
		mayor = n1;
	}
	
	if (n2 % 2 == 0)
	{
		n2par = true;
		
		if (haypar == true)
		{
			if (n2 >= n1)
				mayor = n2;
		}
		else
		{
			haypar = true;
			mayor = n2;	
		}
	}
	
	if (n3 % 2 == 0)
	{
		n3par = true;
		
		if (haypar == true)
		{
			if (n3 >= n2 && n2par == true)
				mayor = n3;
			if (n3 >= n1 && n1par == true)
				mayor = n3;
		}
		else
		{
			haypar = true;
			mayor =	n3;
		}
	}
	
	if (n4 % 2 == 0)
	{
		if (haypar == true)
		{
			if (n4 >= n1 && n1par == true)
				mayor = n4;
			if (n4 >= n2 && n2par == true)
				mayor = n4;
			if (n4 >= n3 && n3par == true)
				mayor = n4;
		}
		else
		{
			haypar = true;
			mayor = n4;
		}
	}
	
	if (haypar == true)
		cout << "El número par mayor es " << mayor;
	else
		cout << "No se ha introducido ningún número par";
}
