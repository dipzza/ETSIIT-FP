#include <iostream>
using namespace std;

int main()
{
	const int MAX = 100;
	
	int n, util_v = 1, v[MAX];
	
	
	cout << "Introduce un número entero: ";
	cin >> n;
	
	for (int i = 1; n != 0; i++)
	{
		v[i] = n % 2;
		util_v++;
		
		n = n / 2;	
	}
	
	for (int i = util_v - 1; i > 0; i--)
		cout << v[i];
}
