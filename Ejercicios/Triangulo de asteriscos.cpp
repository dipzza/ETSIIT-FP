#include <iostream>;
using namespace std;

int main()
{
	int l, i, j, k;
	
	cout << "Introduce la longitud del tri�ngulo" << endl;
	cin >> l;
	
	for (i = 1; i <= l; i++)
	{
		for (j = l; j >= i; j--)
		{
			cout << " ";	
		}
	
		for (k = 1; k <= i; k++)
		{	
			cout << "*";	
		}
		
		cout << endl;
	}
}
