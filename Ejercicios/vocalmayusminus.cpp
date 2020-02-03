#include <iostream>
using namespace std;

int main() {
	
	char letra;
	int asci;
	bool vocalminus = false, vocalmayus = false;
	
	cout << "Introduce un carácter" << endl;
	cin >> letra;
	
	asci = letra;
	
	if (asci == 97 || asci == 101 || asci == 105 || asci == 111 || asci == 117)
		vocalminus = true;
	
	if (asci == 65 || asci == 69 || asci == 73 || asci == 79 || asci == 85)
		vocalmayus = true;
		
		

	if (vocalminus == true)
		cout << "Has introducido una vocal en minúsculas";
		
	else
	{
		if (vocalmayus == true)
			cout << "Has introducido una vocal en mayúsculas";	
			
		else
			cout << "No has introducido una vocal";
	}	
}
