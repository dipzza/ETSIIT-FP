#include <iostream>
#include <cmath>
using namespace std;


int main() {

	double a, b, c, x1, x2, raiz;
	
	cout << "Introduce el coeficiente a: ";
	cin >> a;
	
	cout << "Introduce el coeficiente b: ";
	cin >> b;
	
	cout << "Introduce el término independiente: ";
	cin >> c;
	
	
	
	if (a == 0) {
		x1 = -c/b;
		x2 = x1;
	}
	else {
		raiz = b*b - 4*a*c;	
		x1 = -b + sqrt(raiz)/(2*a);
		x2 = -b - sqrt(raiz)/(2*a);
	}
	
	if (raiz < 0) 
		cout << "La ecuacion no tiene soluciones reales";
	else {
		if (x1 == x2) 	
			cout << "La raíz de la ecuación es " << x1;
		else 
			cout << "Las raíces de la ecuación son" << x1 << " y " << x2;
		}
	}
