#include <iostream>
using namespace std;

class NumeroBinario
{
	private:
		
		static const int MAX = 30;
		int v[MAX] = {0}, util_v = 0;
	
	public:
		
		void LeerNumero()
		{
			cout << "Introduce el número de valores del vector: ";
			cin >> util_v;
	
			for (int i = 0; i < util_v; i++)
			{
				cout << "\nIntroduce el valor nº " << util_v - i << ": ";
				cin >> v[i];		
			}
		}
		
		void GetNumero()
		{
			for (int i = util_v - 1; i >= 0; i--)
			{
				cout << v[i] << " ";	
			}
		}
		
		NumeroBinario Suma(NumeroBinario A)
		{
			int util_final, acarreo = 0;
			NumeroBinario B;
			
			if (util_v > A.util_v)
				util_final = util_v;
			else
				util_final = A.util_v;
			
			
			for (int i = 0; i < util_final || acarreo == 1; i++)
			{
				B.v[B.util_v] = v[i] + A.v[i] + acarreo;
				acarreo = 0;
				
				if (B.v[B.util_v] == 2)
				{
						acarreo = 1;
						B.v[B.util_v] = 0;
				}
			
				if (B.v[B.util_v] == 3)
				{
					acarreo = 1;
					B.v[B.util_v] = 1;
				}
				
				B.util_v++;
			}
			
			return B;
		}
		
		int Decimal()
		{
			int n = 0, x = 1;
			
			for (int i = 0; i < util_v; i++)
			{
				for (int j = 1; j <= i; j++)
					x = x * 2;
		
				n = n + v[i] * x ; 
		
				x = 1;
			}
			
			return n;
		}
		
		NumeroBinario BinarioaDecimal(int n)
		{	
			NumeroBinario A;
			
			A.util_v = 1;
			
			for (int i = 1; n != 0; i++)
			{
				A.v[i] = n % 2;
				A.util_v++;
		
				n = n / 2;
			}
			
			return A;
		}
	
};

int main()
{
	int menu, multi;
	NumeroBinario n, m, suma;
	
	n.LeerNumero();
	
	while (menu != 5)
	{
		cout << "\n\n**********************************************";
		cout << "\n[1] Sumar con otro número binario";
		cout << "\n[2] Multiplicar con otro número binario";
		cout << "\n[3] Ver valor en base decimal";
		cout << "\n[4] Cambiar número binario";
		cout << "\n[5] Finalizar programa";
		cout << "\n**********************************************\n";
		cout << "Elige una opción: ";
		cin >> menu;
		
		if (menu == 1)
		{
			m.LeerNumero();
			
			suma = n.Suma(m);
			
			cout << "\nEl resultado de la suma es: ";
			suma.GetNumero();
		}
		
		if (menu == 2)
		{
			m.LeerNumero();
			
			multi = n.Decimal() * m.Decimal();
			
			m = n.BinarioaDecimal(multi);
			
			cout << "\nEl resultado de la multiplicación es: ";
			m.GetNumero();
			
		}
		
		if (menu == 3)
			cout << "\nEl valor en base decimal es " << n.Decimal();
		
		if (menu == 4)
		{
			n.LeerNumero();
		}
	}
	
	
}
