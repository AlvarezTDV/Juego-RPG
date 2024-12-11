#include "clases.h"
#include "funciones.h"
#include <iostream>
using namespace std;

string nombreDelHeroe;
Heroe jugador(nombreDelHeroe);

int main() {
	int opcion1, opcion2;
	do {
		cout << "Bienvenido!!" << endl;
		cout << "1. Jugar" << endl;
		cout << "2. Cargar partida" << endl;
		cout << "0. Salir" << endl;
		cin >> opcion1;
		switch (opcion1) {
			case 1:
				cin.ignore();
				cout << "Ingrese el nombre del Heroe" << endl;
				getline(cin, nombreDelHeroe);
				do {
					cout << "1. Pueblo" << endl;
					cout << "2. Tienda" << endl;
					cout << "3. Bosque" << endl;
					cout << "4. Cueva del dragon" << endl;
					cout << "0. Salir al menu" << endl;
					cin >> opcion2;
					switch (opcion2) {
						case 1:
							break;
						case 2:
							break;
						case 3:
							caminar(jugador);
							break;
						case 4:
							break;
						case 0:
							break;
					}
				} while (opcion2 != 0);
				break;
			case 2:
				break;
			case 0:
				break;
		}
	} while (opcion1 != 0);
	return 0;
}
