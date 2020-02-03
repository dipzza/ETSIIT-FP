//Leer vect enteros y posición y borrar posición

#include<iostream>
using namespace std;

int main()
{
	const int MAX = 100;
	
	int v [MAX], utilv, pos;
	
	do{
		cout << "Introduce el número de valores que va a introducir" << endl;
		cin >> utilv;
	}while(utilv < 0 || utilv >= MAX);
	
	for (int i = 0; i < utilv; i++)
	{
		cout << "Introduce el valor nº " << i+1 << endl;
		cin >> v[i];
	}
	
	do{
		cout << "Elige la posición a eliminar" << endl;
		cin >> pos;
	}while(pos > utilv || pos < 0);
	
	for (int i = pos - 1; i < utilv - 1; i++ )
	{
			v[i] = v[i+1];
	}
	utilv--;
	
	for (int i = 0; i < utilv; i++)
	{
		cout << " - " << v[i];	
	}
}
