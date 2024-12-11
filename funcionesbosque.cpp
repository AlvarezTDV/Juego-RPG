#include <iostream>
#include "clases.h"
#include "funciones.h"
using namespace std;

/*Mounstruo bestiaSalvaje("Bestia", 100, 15, 2, 0, 0);
Mounstruo muertosVivientes("Zombi", 50, 20, 1, 0, 0);
Mounstruo demonios("Demonio", 200, 20, 5, 0, 0);*/

void caminar(Heroe jugador, int opcion) {
	if (jugador.mover() <= 3) {
		cout << "Aparece un mounstruo !!!" << endl;
		
		do {
			cout << "Escoga que hacer: " << endl;
			cout << "1. Atacar" << endl;
			cout << "2. Huir" << endl;
			cin >> opcion;
					
			system("cls");
					
			switch (opcion) {
				case 1:
					break;
				case 2:
					break;
				default:
					cout << "Escoga una opcion valida" << endl;
					break;
			}
		} while (opcion != 2);
	}
}


