#include <iostream>
using namespace std;

int main()
{
	int a, b, resta, resultado = 1;
	

	cout << "Introduce el dividendo: ";
	cin >> a;
	
	cout << "Introduce el divisor: ";
	cin >> b;
	
	resta = a - b;
	
	while (resta >= b)
	{
		resta -= b;
		resultado++;
	}
	
	cout << (a - b*(resultado)) << endl;
	
	cout << "a:b es igual a " << resultado;
}
