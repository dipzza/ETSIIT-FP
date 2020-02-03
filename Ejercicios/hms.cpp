#include <iostream>
using namespace std;


int main() {

	int horas, minutos, segundos;
	
	cout << "Introduce las horas: ";
	cin >> horas;

	cout << "Introduce los minutos: ";
	cin >> minutos;
	
	cout << "Introduce los segundos: ";
	cin >> segundos;
	
	horas = horas + minutos/60;
	minutos = minutos%60 + segundos/60;
	segundos = segundos%60;
	
	cout << horas << " horas, " << minutos << "minutos y " << segundos << " segundos.";
}
