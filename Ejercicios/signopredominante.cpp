#include <iostream>
using namespace std;

int main() {
	
	int n1, n2, n3, signo = 0;
	bool positivo = false;
	
	cout << "Introduce el 1er número: ";
	cin >> n1;
	
	cout << "Introduce el 2o número: ";
	cin >> n2;
	
	cout << "Introduce el 3er número: ";
	cin >> n3;
	
	if (n1 > 0)
		signo++;
	else
		signo--;
	
	if (n2 > 0)
		signo++;
	else
		signo--;
		
	if (n3 > 0)
		signo++;
	else
		signo--;
		
	if (signo > 0)
		positivo = true;
		
	if (positivo == true)
		cout << "El signo predominante es positivo";
	else
		cout << "El signo predominante es negativo";
	
}
