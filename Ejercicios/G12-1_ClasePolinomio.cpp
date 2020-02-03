#include <iostream>
#include <cmath>
using namespace std;

struct raices2g
{
	double x1, x2;
	bool haysol = true;
};


class Polinomio2G
{
	private:
		
		int a, b, c;
	
	public:
		
		Polinomio2G(int a, int b, int c)
			:a(a), b(b), c(c) {}
		
		Polinomio2G()
			:a(1), b(1), c(1) {}
			
		Geta()
		{
			return a;
		}
		
		Getb()
		{
			return b;
		}
		
		Getc()
		{
			return c;
		}
		
		Polinomio2G Suma(Polinomio2G f)
		{
			Polinomio2G h;
			
			h.a = f.a + a;
			h.b = f.b + b;
			h.c = f.c + c;
			
			return h;		
		}
	
		Polinomio2G Escalar(int n)
		{
			Polinomio2G f;
			
			f.a = a * n;
			f.b = b * n;
			f.c = c * n;
			
			return f;
		}
		
		raices2g Raices()
		{
			raices2g sol;
			int raiz;
			
			if (a == 0)
			{
				sol.x1 = -c/b;
				sol.x2 = sol.x1;
			}
			else 
			{
				raiz = b*b - 4*a*c;
				if (raiz < 0)
					sol.haysol = false;
				else
				{
					sol.x1 = (-b + sqrt(raiz)) / (2*a);
					sol.x2 = (-b - sqrt(raiz)) / (2*a);
				}
			}
			
			return sol;
		}
};

int main()
{
	Polinomio2G f, g, suma, escalar;
	
	int a, b, c, n, menu = 4;
	
	raices2g x;
	
	
	cout << "Introduzca un polinomio:";
	
	cout << "\n\n	Introduce a: ";
	cin >> a;
	
	cout << "\n	Introduce b: ";
	cin >> b;
	
	cout << "\n	Introduce c: ";
	cin >> c;
	
	f = Polinomio2G(a, b, c);
	
	while (menu != 5)
	{
		cout << "\n\n**********************************************";
		cout << "\n[1] Sumar con otro polinomio";
		cout << "\n[2] Multiplicar polinomio por un escalar";
		cout << "\n[3] Calcular raices del polinomio";
		cout << "\n[4] Cambiar datos del polinomio";
		cout << "\n[5] Salir";
		cout << "\n**********************************************\n";
		cout << "Elige una opción: ";
		cin >> menu;
		 
		if (menu == 1)
		{	
			cout << "\nIntroduzca otro polinomio:";
	
			cout << "\n\n	Introduce a: ";
			cin >> a;
	
			cout << "\n	Introduce b: ";
			cin >> b;
	
			cout << "\n	Introduce c: ";
			cin >> c;
				
			g = Polinomio2G(a, b, c);
				
				
			suma = f.Suma(g);
				
			cout << "\n\nEl resultado de la suma es: " << suma.Geta() << "x^2 + " << suma.Getb() << "x + " << suma.Getc();
		}
		
		if (menu == 2)
		{		
			cout << "\nIntroduzca el escalar: ";
			cin >> n;
				
			escalar = f.Escalar(n);
			cout << "\n\nEl polinomio multiplicado por el escalar es: " << escalar.Geta() << "x^2 + " << escalar.Getb() << "x + " << escalar.Getc();
		}
				
		if (menu == 3)
		{	
			x = f.Raices();
				
			if (x.haysol == false)
				cout << "\n\nEste polinomio no tiene soluciones reales";
			else
				cout << "\n\nx1 = " << x.x1 << ". x2 = " << x.x2 << ".";
		}
		
		if (menu == 4)
		{
			cout << "\nIntroduzca un polinomio:";
	
			cout << "\n\n	Introduce a: ";
			cin >> a;
	
			cout << "\n	Introduce b: ";
			cin >> b;
	
			cout << "\n	Introduce c: ";
			cin >> c;
	
			f = Polinomio2G(a, b, c);
		}
	}
}
