#include <iostream>
using namespace std;

int main() {
	
	char letra;
	int asci;
	bool minus = false, mayus = false;
	
	cout << "Introduce un carácter" << endl;
	cin >> letra;
	
	asci = letra;
	
	if (asci >= 97 && asci <= 122)
		minus = true;
	
	if (asci >= 65 && asci <= 90)
		mayus = true;
		
		

	if (minus == true)
		asci -= 32;

	if (mayus == true)
		asci += 32;
	
	letra = asci;
	
	
	if (mayus == true || minus == true)
		cout << letra;
		
	else
		cout << "No has introducido una letra";
}
