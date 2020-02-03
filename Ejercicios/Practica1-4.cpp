#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	int a,b,c,d,e,f,x,y;
	
	cout << "Introduce el valor de a: ";
	cin >> a;

	cout << "Introduce el valor de b: ";
	cin >> b;
	
	cout << "Introduce el valor de c: ";
	cin >> c;
	
	cout << "Introduce el valor de d: ";
	cin >> d;
	
	cout << "Introduce el valor de e: ";
	cin >> e;
	
	cout << "Introduce el valor de f: ";
	cin >> f;
	
	
	y = (f*a - d*c)/(-d*b + a*e);
	x = (b*f - e*c)/(b*d - e*a);

	cout << "X es igual a" << x << " Y es igual a " << y;
}
