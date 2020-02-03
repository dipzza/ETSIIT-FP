#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	double real1, real2;
	
	
	cout << "Introduce la cantidad de números a procesar" << endl;
	cin >> n;
	
	cout << "Introduce el primer nº real" << endl;
	cin >> real2;
	
	
	for(int i = 2; i <= n; i++)
	{
		cout << "Introduce el número real nº " << i << endl;
		cin >> real1;
		
		if (abs(real1) <= abs(real2))
			real2 = real1;
	}
	
	
	cout << "El número más cercano al 0 es " << real2;
}
