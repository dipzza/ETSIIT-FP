#include <iostream>
using namespace std;

int main() {
	int n, m;
	bool esprimo;
	
	cout << "Introduce 2 números";
	cin >> n;
	cin >> m;
	
	for (t=n; t <= m; t++){
		for (int i = 2; i < t; i++){
			if (n%i == 0)
				esprimo=false;
		}
	}
}
