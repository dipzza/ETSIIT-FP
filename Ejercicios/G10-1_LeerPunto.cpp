#include <iostream>
using namespace std;

struct punto
{ 
   double x; 
   double y; 
};
 
struct circulo
{
   punto centro;
   double radio;
};


// Lee un punto pidiendo sus coordenadas

punto LeerPunto()
{
	punto A;
	
	cout << "Introduce un punto" << endl << "------------------ "<< endl;
	
	cout << "    Introduce la coordenada X del punto: ";
	cin >> A.x;
	
	cout << endl << "    Introduce la coordenada Y del punto: ";
	cin >> A.y;
	
	return A;
}


// Lee un c�rculo pidiendo las coordenadas de su centro y su radio

circulo LeerCir()
{
	circulo C;
	
	cout << "Introduce el centro del c�rculo: " << endl << endl;
	
	cout << "	Introduce la coordenada X: ";
	cin >> C.centro.x;
	
	cout << "	Introduce la coordenada y: ";
	cin >> C.centro.y;
	
	
	cout << endl << "Introduce el radio del c�rculo: ";
	cin >> C.radio;
	
	return C;
}


// Muestra los datos de un c�rculo (coordenadas del centro y radio)

void MostrarCir(circulo c)
{
	cout << "El centro del c�rculo es: [" << c.centro.x << " , " << c.centro.y << "]";
	
	cout << endl << "El radio del c�rculo es: " << c.radio;	
}


// Comprueba si un punto est� dentro de un c�rculo

bool EstaDentro(punto p, circulo c)
{		
	return ( (p.x - c.centro.x) * (p.x - c.centro.x) + (p.y - c.centro.y) * (p.y - c.centro.y) <= c.radio * c.radio );
}


int main ()
{
	int MAX = 100, util_total, util_v = 0, util_w = 0;
	
	circulo v[MAX], w[MAX], tmp;
	
	punto A;
	
	
	A = LeerPunto();
	
	do
	{
		cout << endl << "Introduce el n�mero de circulos: ";
		cin >> util_total;
	} while (util_total < 1 || util_total > 99);
	
	for (int i = 0; i < util_total; i++)
	{
		cout << endl << "Introduce el c�rculo n� " << i + 1 << endl << "-------------------------" << endl;
		tmp = LeerCir();
		
		if (EstaDentro(A, tmp))
		{
			v[util_v] = tmp;
			util_v++;	
		}
		else
		{
			w[util_w] = tmp;	
			util_w++;
		}
	}
	
	
	cout << endl;
	for (int i = 0; i < util_v; i++)
	{
		cout << "El c�rculo que contiene al punto n� " <<  i + 1 << " tiene estos datos " << endl << "---------------------------------" << endl;
		MostrarCir(v[i]);
		cout << endl << endl;
	}
	
	for (int i = 0; i < util_w; i++)
	{
		cout << "El c�rculo que no contiene al punto n� " <<  i + 1 << " tiene estos datos " << endl << "---------------------------------" << endl;
		MostrarCir(w[i]);
		cout << endl << endl;
	}
}
