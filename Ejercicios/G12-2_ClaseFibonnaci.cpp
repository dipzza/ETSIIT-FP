#include <iostream>
using namespace std;


class Fibonacci
{	
	private:
		int f0, f1, fn;
		
	public:
		
		Fibonacci()
			:f0(1), f1(1), fn(1) {}
		
		void Reiniciar()
		{
			f0 = 1; 
			f1 = 1;
			fn = 1;	
		}
		
		int Siguiente()
		{
			fn = f0 + f1;
			f0 = f1;
			f1 = fn;
			
			return fn;	
		}
		
		int Getf0()
		{
			return f0;	
		}
		
		int Getf1()
		{
			return f1;	
		}
		
		int Getfn()
		{
			return fn;	
		}
};

mm
int main()
{
	int n, menu;
	Fibonacci Sucesion;
	
	cout << "\nIntroduce hasta donde quieres calcular la sucesión de fibonacci: ";
	cin >> n;
	
	while (menu != 4)
	{
		cout << "\n\n**********************************************";
		cout << "\n[1] Reiniciar sucesión";
		cout << "\n[2] Continuar sucesión ´n´ veces";
		cout << "\n[3] Cambiar valor de ´n´";
		cout << "\n[4] Finalizar programa";
		cout << "\n**********************************************\n";
		cout << "Elige una opción: ";
		cin >> menu;
		
		
		if (menu == 1)
			Sucesion.Reiniciar();
		
		if (menu == 2)
		{
			cout << endl;
			
			for (int i = 1; i <= n; i++)
			{
				cout << Sucesion.Siguiente() << "	";
			}
		}
		
		if (menu == 3)
		{
			cout << "\nIntroduce hasta donde quieres calcular la sucesión de fibonacci: ";
			cin >> n;
		}
	}
}
