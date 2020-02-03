#include <iostream>
using namespace std;

int main()
{
	int l;
	
	cout << "Introduce la longitud." << endl;
	cin >> l;
	
	for (int i = 1; i <= l * 2; i = i + 2)
	{
		for (int j = 1; j <= i; j++)
			cout << j%10;
		
		cout << endl;	
	}
}
