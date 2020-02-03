#include <iostream>
using namespace std;

int main() {
	
	int f0 = 1, f1 = 1, fn = 1, n;
	
	cout << "Introduce hasta donde quieres calcular la sucesión de fibonacci: ";
	cin >> n;
	
	for (int i = 1; i <= n; i++)
	{
		fn = f0 + f1;
		f0 = f1;
		f1 = fn;
		cout << fn << endl;
	}
	
}
