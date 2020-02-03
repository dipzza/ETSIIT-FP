#include <iostream>
using namespace std;

int main ()
{
	const int MAX = 100;
	
	int util_v, l, lfinal = 0;
	
	char v[MAX], rep, masrep;
	
	bool repetido = false;
	
	do
	{
		cout << "Introduce el número de valores: ";
		cin >> util_v;
	}while(util_v <= 0 || util_v >= 101);
	
	
	for (int i = 0; i < util_v; i++)
	{
		cout << "Introduce el valor nº " << i + 1 << " : ";
		cin >> v[i];
	}
	
	for (int i = 0; i < util_v - 1; i++)
	{
		rep = v[i];
		l = 0;
		
		for (int j = 0; j < util_v; j++)
		{
			if (i != j)
			{
				if (v[i] == v[j])
				{
					l++;
				}
			}
		}
		
		if (l > lfinal)
		{
			lfinal = l;
			masrep = rep;
		}
	}
	
	
	for (int i = 0; i < util_v; i++)
	{
		cout << v[i] << " ";
	}
}
