#include <iostream>
using namespace std;

int main()
{
	
	long long f = 1;
	int n;
	
	cout << "Introduce un número para saber su factorial" << endl;
	cin >> n;
	
	for (int i = 2; i <= n; i++)
	{	
		f = f * i;
	}
	
	cout << "El factorial da como resultado " << f;
	

}
