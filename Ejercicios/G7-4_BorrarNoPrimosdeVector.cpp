#include <iostream>
using namespace std;

int main ()
{
	const int MAX = 100;
	
	int v[MAX], util_v;
	
	
	cout << "Introduce el número de valores: ";
	cin >> util_v;
	
	for (int i = 0; i < util_v; i++)
	{
		cout << "Introduce el valor nº " << i + 1 << " : ";
		cin >> v[i];
	}
	
	
	for (int i = 0; i < util_v; i++)
	{
		for (int j = 2; j < v[i]; j++)
		{
			if (v[i] % j == 0)
			{
				for (int k = i; k < util_v; k++)
				{
					v[k] = v[k + 1];
				}
				
				util_v--;
			}
		}
	}
	
	for (int i = 0; i < util_v; i++)
	{
		cout << v[i] << " ";
	}
}
