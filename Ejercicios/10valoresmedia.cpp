#include <iostream>
using namespace std;

int main(){
	
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, superamedia = 0;
	double media;
	
	cout << "Introduce diez valores, pulsando enter después de cada uno" << endl;
	cin >> n1;
	cin >> n2;
	cin >> n3;
	cin >> n4;
	cin >> n5;
	cin >> n6;
	cin >> n7;
	cin >> n8;
	cin >> n9;
	cin >> n10;
	
	media = (n1+n2+n3+n4+n5+n6+n7+n8+n9+n10)/10;
	
	if (n1 > media)
		superamedia++;
		
	if (n2 > media)
		superamedia++;
		
	if (n3 > media)
		superamedia++;
		
	if (n4 > media)
		superamedia++;
		
	if (n5 > media)
		superamedia++;
		
	if (n6 > media)
		superamedia++;
		
	if (n7 > media)
		superamedia++;
		
	if (n8 > media)
		superamedia++;
		
	if (n9 > media)
		superamedia++;
		
	if (n10 > media)
		superamedia++;	
	
	cout << "El número de valores que supera la media es " << superamedia;
	
}
