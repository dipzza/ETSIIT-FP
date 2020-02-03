#include <iostream>
using namespace std;

int main()
{
	int n, mayornegativo = 0, menorpositivo = 0;
	
	for (int i = 1; i <= 25; i++)
	{
		cout << "Introduce el entero nº " << i << " : ";
		cin >> n;
				
		if (n < 0)
		{
			if (n > mayornegativo || mayornegativo == 0)
				mayornegativo = n;
		}
		else
		{
			if (n < menorpositivo || menorpositivo == 0)
				menorpositivo = n;
		}
	}
	
	
	for (int i = mayornegativo + 1; i < menorpositivo; i++)
	{
		cout << i << " ";	
	}	
}
