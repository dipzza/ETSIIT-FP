#include <iostream>
using namespace std;

int main()
{
	int n, suma = 0, i = 0;
	double media;
	
	cout << "Introduce el siguiente valor: ";
	cin >> n;
	
	while ( n % 2 != 0 )
	{
		suma += n;
		i++;
		
		cout << "Introduce el siguiente valor: ";
		cin >> n;

	}
	
	media = suma / i;
	
	cout << "El resultado de la media " << media;

}
