#include<iostream>

using namespace std;

int main()
{
	int l, i;
	
	cout << "Introduce la longitud: ";
	cin >> l;

	for (i = (l-1)/2; i >= 0 ; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << " ";
		}
		
		for (int k = 1; k <= l - (i*2) ; k++)
		{
			cout << "*";
		}
		
		for (int j = 1; j <= i; j++)
		{
			cout << " ";
		}
		
		cout << endl;
	}
}

