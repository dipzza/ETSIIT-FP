#include <iostream>
using namespace std;

int main ()
{
	const int MAX = 100;
	
	int util_v;
	
	char v[MAX];
	
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
		for (int j = 0; j < util_v; j++)
		{
			if (i != j)
			{
				if (v[i] == v[j])
				{
					for (int k = j; k < util_v ; k++)
						v[k] = v[k + 1];
					
					util_v--;
					j--;
				}
			}
		}
	}
	
	
	for (int i = 0; i < util_v; i++)
	{
		cout << v[i] << " ";
	}
}
