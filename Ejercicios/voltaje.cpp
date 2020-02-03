#include <iostream>
using namespace std;

// Calcular el voltaje con la I y la R

int main() {
	double I, R, V;
	
	cout << "Introduce el valor de la intensidad: ";
	cin >> I;
	
	cout << "Introduce el valor de la resistencia: ";
	cin >> R;
	
	V = I * R;
	
	cout << "El voltaje es " << V;
}
