//Leer vect enteros y posici�n y un x

#include<iostream>
using namespace std;

int main()
{
	const int MAX = 100;
	
	int v [MAX], utilv, pos, x;
	
	
	do{
		cout << "Introduce el n�mero de valores que va a introducir" << endl;
		cin >> utilv;
	}while(utilv < 0 || utilv >= MAX);
	
	for (int i = 0; i < utilv; i++)
	{
		cout << "Introduce el valor n� " << i+1 << endl;
		cin >> v[i];
	}
	
	do{
		cout << "Elige la posici�n donde insertar el valor" << endl;
		cin >> pos ;
	}while(pos > utilv || pos < 0);
	
	pos--;
	
	cout << "Introduce un x" << endl;
	cin >> x;
	
	for (int i = utilv - 1; i >= pos ; i-- )
	{
			v[i+1] = v[i];
	}
	v[pos] = x;
	utilv++;
	
	for (int i = 0; i < utilv; i++)
	{
		cout << " - " << v[i];	
	}
}
