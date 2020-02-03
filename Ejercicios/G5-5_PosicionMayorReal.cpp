#include <iostream>
using namespace std;

int main()
{
	int n, mayor, p;
	
	
	cout << "Introduce el valor nº 1" << endl;
	cin >> n;
	
	mayor = n;
		
	for (int i = 1; i <= 100 && n < 1000; i++)
	{	
		if (n > mayor)
		{
			mayor = n;
			p = i;
		}
		
		cout << "Introduce el valor nº " << i + 1 << endl;
		cin >> n;
	}
	
	cout << "La posición del mayor real leído es " << p << ".";
}
