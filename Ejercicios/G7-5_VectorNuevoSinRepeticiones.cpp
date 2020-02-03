#include <iostream>
using namespace std;

int main ()
{
	const int MAX = 100;
	
	int util_v, util_w = 1;
	
	char v[MAX], w[MAX];
	
	bool repetido = false;
	
	
	cout << "Introduce el número de valores: ";
	cin >> util_v;
	
	for (int i = 0; i < util_v; i++)
	{
		cout << "Introduce el valor nº " << i + 1 << " : ";
		cin >> v[i];
	}
	
	w[0] = v[0];
	
	
	for (int i = 1; i < util_v; i++)
	{
		for (int j = 0; j < util_w && repetido == false; j++)
		{
			if (v[i] == w[j])
				repetido = true;
		}
		
		if (repetido == false)
		{
			w[util_w] = v[i];
			util_w++;
		}
		
		repetido = false;
	}
	
	
	for (int i = 0; i < util_w; i++)
	{
		cout << w[i] << " ";
	}
}
