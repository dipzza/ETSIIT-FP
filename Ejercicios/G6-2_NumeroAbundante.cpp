#include <iostream>
using namespace std;

int main ()
{
	int suma = 0, numAbun = 0, num = 3;
	
	
	while (numAbun < 50)	
	{
		for (int j = 1; j < num; j++)
		{
			if (num % j == 0)
				suma += j;
		}
		
		if (suma > num)
		{
			cout << num << " es un número abundante." << endl;
			numAbun++;
		}
		num++;
		suma = 0;
	}	
}
