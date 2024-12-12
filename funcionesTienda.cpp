#include <iostream>
#include "clases.h"
#include "funciones.h"
using namespace std;

void mostrarObjetosTienda() {
	int opcion;
	cout << "// BIENVENIDO A LA TIENDA //" << endl;
	do {
		cout << "Rango de Objetos: " << endl;
		cout << "1. Rango 1" << endl;
		cout << "2. Rango 2" << endl;
		cout << "3. Rango 3" << endl;
		cout << "4. Rango 4" << endl;
		cout << "0. Salir" << endl;
		cin >> opcion;
		
		system("cls");
		
		switch (opcion) {
			case 1:
				tienda.mostrarObjetos(rango1, 1);
				break;
			case 2:
				tienda.mostrarObjetos(rango2, 2);
				break;
			case 3:
				tienda.mostrarObjetos(rango3, 3);
				break;
			case 4:
				tienda.mostrarObjetos(rango4, 4);
				break;
			default:
				break;
		}
	} while (opcion != 0);
}
