#include <iostream>
using namespace std;

// Leer matriz de enteros y muestre por pantalla el máximo de los mínimos de las filas

int main 
{
	
	// Leer utilFil_m utilCol_m y m
	
	int mayor, minimo;
	
	for (i = 0; i < utilFil_m; i++)
	{
		menor = m[i][0]
		
		for (j = 0; j < utilCol_m; j++)
		{
			if (m[i][j] < menor)
				menor = m[i][j];		
		}
		
		if (i==0)
			mayor = menor;
		else
			if ( mayor < menor )
				mayor = menor;
	}
}
