#include <iostream>

using namespace std;
void comprobar(char tecla);
int main() {
	char c;
	cout << "Pulsa un numero: ";
	cin >> c;
	comprobar(c);
	cout << "Programa terminado." << endl;
}

void comprobar(char tecla) {
	int n = int(tecla);
	
	if (n >= 48 and n <= 57) {
		cout << "Correcto, la tecla pulsada es un numero." << endl;
	} else {
		cout << "Incorrecto, la tecla pulsada NO es un numero." << endl;
		cout << "Vuelve a pulsar un numero: ";
		cin >> tecla;
		comprobar(tecla);
	}
}
