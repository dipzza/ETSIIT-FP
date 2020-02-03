#include <iostream>
using namespace std;

int main() {
	
	int x = 10, y = 20, z = 30, tmp;
	
	tmp = x;
	x = z;
	z = y;
	y = tmp;
	
	cout << " El valor de x es " << x << ", el de y es " << y << " y el de z es " << z;
	
	
}
