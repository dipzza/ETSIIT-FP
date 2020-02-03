#include <iostream>
using namespace std;

int main()
{
	int n;
		
	
	cout << "Introduce un número para calcular sus divisores: ";
	cin >> n;	
		
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			cout << i << " es divisor propio de " << n << endl;	
	}	
}
