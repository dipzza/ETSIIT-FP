#include <iostream>
using namespace std;

int main()
{
	int n;
	bool esprimo = true;
	
	cout << "Introduce un n�mero para saber si es primo" << endl;
	cin >> n;
	
	
	for (int i = 2; i < n && esprimo == true; i++)
	{	
		if (n % i == 0)
			esprimo = false;
	}
	
	
	if (esprimo == true && n > 1)
		cout << "El n�mero " << n << " es primo.";
	else
		cout << "El n�mero " << n << " no es primo.";
}
