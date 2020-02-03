#include <iostream>
using namespace std;

int main()
{
	int n, multiplo;
	
	
	cout << "Introduce un número para saber sus 1000 primeros múltiplos" << endl;
	cin >> n;
	
	
	for (int i = 0; i <= 1000; i++)
	{
		multiplo = n * i;
		
		cout << n << " * " << i << " = " << multiplo << endl;
	}
}
