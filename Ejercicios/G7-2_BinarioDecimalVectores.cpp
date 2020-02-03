#include <iostream>
using namespace std;

int main()
{
	const int MAX = 100;
	
	int n = 0, util_v, v[MAX], x = 1;
	
	
	cout << "Introduce el número de valores del vector: ";
	cin >> util_v;
	
	for (int i = 0; i < util_v; i++)
		cin >> v[i];
	
		
	for (int i = 0; i < util_v; i++)
	{
		for (int j = 1; j < util_v - i; j++)
			x = x * 2;
		
		n = n + v[i] * x ; 
		
		x = 1;
	}
	
	cout << endl << n;
}
