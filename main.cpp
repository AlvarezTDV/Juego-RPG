#include "clases.h"
#include "funciones.h"
#include <iostream>
using namespace std;

Heroe jugador("Arthas", 100, 10, 5, 0, 0);

int main() {
	int opcion1, opcion2, opcion3;
	do {
		cout << "Bienvenido!!" << endl;
		cout << "1. Jugar" << endl;
		cout << "2. Cargar partida" << endl;
		cout << "0. Salir" << endl;
		cin >> opcion1;
		
		system("cls");
		
		switch (opcion1) {
			case 1:
				system("cls");
				
				cout << "Eres un valiente guerrero llamado " << jugador.nombre << endl;
				cout << "Debes derrotar al dragon que habita en la cueva" << endl << endl;

				do {
					cout << "Acciones: " << endl;
					cout << "1. Pueblo" << endl;
					cout << "2. Tienda" << endl;
					cout << "3. Bosque" << endl;
					cout << "4. Cueva del dragon" << endl;
					cout << "0. Salir al menu" << endl;
					cin >> opcion2;
					
					system("cls");
					
					jugador.estadisticas();
					
					switch (opcion2) {
						case 1:
							break;
						case 2:
							break;
						case 3:
							caminar(jugador, opcion3);
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
