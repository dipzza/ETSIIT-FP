#include <iostream>
using namespace std;

int main()
{
	int n, mayor, p;
	
	
	cout << "Introduce el valor n� 1" << endl;
	cin >> n;
	
	mayor = n;
		
	for (int i = 1; i <= 100 && n < 1000; i++)
	{	
		if (n > mayor)
		{
			mayor = n;
			p = i;
		}
		
		cout << "Introduce el valor n� " << i + 1 << endl;
		cin >> n;
	}
	
	cout << "La posici�n del mayor real le�do es " << p << ".";
}
