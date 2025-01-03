#include "clases.h"
#include "funciones.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	int opcion1, opcion2, opcion3, opcion4;
	do {
		cout << "+--------------------------+" << endl;
  		cout <<	"�         DRAGON'S         �" << endl;
  		cout <<	"�          LEGACY          �" << endl;
  		cout <<	"+--------------------------+" << endl;
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
				
				system("pause");

				do {
					system("cls");
					
					cout << "Acciones: " << endl;
					cout << "1. Pueblo (ir a descansar)" << endl;
					cout << "2. Tienda" << endl;
					cout << "3. Bosque" << endl;
					cout << "4. Cueva del dragon" << endl;
					cout << "5. Estadisticas" << endl;
					cout << "0. Salir al menu" << endl;
					cin >> opcion2;
					
					system("cls");
					
					switch (opcion2) {
						case 1:
							jugador.descansar();
							system("pause");
							break;
						case 2:
							mostrarObjetosTienda();
							break;
						case 3:
							caminar(jugador, opcion3);
							break;
						case 4:
							entrarALaCueva(jugador, opcion4);
							break;
						case 5:
							jugador.estadisticas();
							system("pause");
							break;
						case 0:
							break;
					}
				} while (opcion2 != 0);
				break;
			case 2:
				cargarPartida(jugador, archivoDeCargado);
				do {
					system("cls");
					
					cout << "Acciones: " << endl;
					cout << "1. Pueblo (ir a descansar)" << endl;
					cout << "2. Tienda" << endl;
					cout << "3. Bosque" << endl;
					cout << "4. Cueva del dragon" << endl;
					cout << "5. Estadisticas" << endl;
					cout << "0. Salir al menu" << endl;
					cin >> opcion2;
					
					system("cls");
					
					switch (opcion2) {
						case 1:
							jugador.descansar();
							system("pause");
							break;
						case 2:
							mostrarObjetosTienda();
							break;
						case 3:
							caminar(jugador, opcion3);
							break;
						case 4:
							entrarALaCueva(jugador, opcion4);
							break;
						case 5:
							jugador.estadisticas();
							system("pause");
							break;
						case 0:
							break;
					}
				} while (opcion2 != 0);
				break;
			case 0:
				cout << "Se guardo la partida exitosamente!!!" << endl;
				guardarPartida(jugador, archivoDeGuardado);
				break;
		}
	} while (opcion1 != 0);
	return 0;
}
