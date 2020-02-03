#include <iostream>
using namespace std;

int main()
{
	int n;
	bool nPerfecto = false;
	
	
	cout << "Introduce un número para saber si es un cuadrado perfecto: ";
	cin >> n;
	
	
	for (int i = 1; i*i <= n; i++)
	{
		if (i*i == n)
			nPerfecto = true;
	}
	
	
	if (nPerfecto == true)
		cout << "N es un cuadrado perfecto";
	else
		cout << "N no es un cuadrado perfecto";
}
