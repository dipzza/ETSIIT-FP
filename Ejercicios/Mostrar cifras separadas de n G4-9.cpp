#include <iostream>
using namespace std;

int main()
{
	int n, tmp = 0, cifras = 1;
	
	
	cout << "Introduce un número para ver sus cifras: ";
	cin >> n;
	
	for (int i = 100; i >= cifras; i = i / 10)
	{
		tmp = (n - n % i)/ i - tmp * i;
		cout << tmp << " ";
	}
}
