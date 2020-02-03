#include <iostream>
using namespace std;

int main() {
	
	const double pi = 3.1415926535;
	
	double radio, area;
	
	cout << "Introduce el radio de la circunferencia: ";
	cin >> radio;
	
	area = pi * radio * radio;
	
	cout << "\nEl área de la circunferencia es " << area;
}
