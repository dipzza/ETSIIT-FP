#include <iostream>
using namespace std;

int main()
{
	int n;
	bool esprimo = true;
	
	cout << "Introduce un número para saber si es primo" << endl;
	cin >> n;
	
	
	for (int i = 2; i < n && esprimo == true; i++)
	{	
		if (n % i == 0)
			esprimo = false;
	}
	
	
	if (esprimo == true && n > 1)
		cout << "El número " << n << " es primo.";
	else
		cout << "El número " << n << " no es primo.";
}
