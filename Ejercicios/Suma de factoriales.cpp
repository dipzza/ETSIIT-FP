#include <iostream>
using namespace std;

int main()
{
	
	long long suma = 0, f = 1;
	int n, i, j;
	
	cout << "Introduce el valor de n" << endl;
	cin >> n;
	
	for(j = 1; j <= n; j++)
	{		
	
		/*
		for (i = 2; i <= j; i++)
		{
			f = f * i;
		}
		
		suma = suma + f;
		f = 1;
		*/
		
		f = f * j;
		suma = suma + f;
	}
	
	cout << "El factorial da como resultado " << suma;
}
