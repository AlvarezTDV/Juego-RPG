#include <iostream>
using namespace std;

int main() {
	int opcion;
	do {
		cout << "Bienvenido!!" << endl;
		cout << "1. Jugar" << endl;
		cout << "2. Cargar partida" << endl;
		cout << "0. Salir" << endl;
		cin >> opcion;
	} while (opcion != 0);
	return 0;
}
