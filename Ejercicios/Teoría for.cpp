#include <iostream>
using namespace std;

int main() {
	/*
	
	int i, n, factorial = 1;
	
	cout << "Introduce n: ";
	cin >> n;
	
	
	for (i = 2; i <= n; i++)
	{
		factorial = factorial * i;
	}
	
	cout << "El resultado del factorial es " << factorial;
	*/
	
	/*
	int n = 1;
	char a = "a";
	
	while (a != ".")
	{
		cout << "Introduce un c�racter: ";
		cin >> a;
		
		if (a == "a" || a == "e" || a == "i" || a == "o" || a == "u")
			n++;	
	}
	
	cout << "El n�mero de v�cales que has introducido es " << n;
	*/
	
	/*
	int n, i;
	bool esprimo = true;
	
	cout << "Introduce un n�mero: ";
	cin >> n;
	
	for (i = 2; i < n && esprimo; i++)
	{
		if (n % i == 0)
			esprimo = false;
	}
	
	if (esprimo ==true)
		cout << "El n�mero es primo.";
	else
		cout << "El n�mero no es primo.";
		*/
		
	int coc, n, i = 2;
	
	cout <<"Introduce un n�mero: ";
	cin >> n;
	
	coc = n;
	
	while (coc != 1)
	{
		if (coc % i == 0)
		{
			cout << i << endl;
			coc = coc/i;
		}
		else
			i++;
		
	}	
}
