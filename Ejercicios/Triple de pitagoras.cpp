#include <iostream>
using namespace std;


int main() {
	
	int a, b, c;
	bool pitagoras;
	
	cout << "Introduce el valor de a: ";
	cin >> a;
	
	cout << "Introduce el valor de b: ";
	cin >> b;
	
	cout << "Introduce el valor de c: ";
	cin >> c;
	
	pitagoras = (c*c == a*a + b*b);
	
	if (pitagoras == true)
		cout << "Cumple el Triple de Pitágoras";
		
	else
		cout << "No cumple el Triple de pitágoras";

}
