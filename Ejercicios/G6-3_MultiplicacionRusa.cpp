#include <iostream>
using namespace std;

int main ()
{
	int n, m, resultado = 0;
	
	cout << "Introduce el multiplicando: ";
	cin >> n;
	
	cout << "Introduce el multiplicador: ";
	cin >> m;
	
	if (n % 2 != 0)
		resultado += m;
	
	while (n != 1)
	{
		m= m*2;
	
		n= n/2;
		
		if (n % 2 != 0)
			resultado += m;
	}
	
	cout << "El resultado de la multiplicación es " << resultado;
}
