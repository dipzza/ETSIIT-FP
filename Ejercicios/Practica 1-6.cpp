#include <iostream>
using namespace std;

int main() {
	
	int horas, minutos, segundos;
	
	cout << "Introduce el número de horas: ";
	cin >> horas;
	
	cout << "Introduce el número de minutos: ";
	cin >> minutos;
	
	cout << "Introduce el número de segundos: ";
	cin >> segundos;
	
	while (segundos > 60) {
		
		segundos = segundos - 60;
		minutos = minutos + 1;
		
	}		
	
		while (minutos > 60) {
		
		minutos = minutos - 60;
		horas = horas + 1;
		
	}
	
	cout << horas << " horas, " << minutos << " minutos, " << segundos << " segundos.";

}
