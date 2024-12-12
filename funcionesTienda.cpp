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
				eleccionObjeto(rango1, jugador, 1);
				break;
			case 2:
				eleccionObjeto(rango2, jugador, 2);
				break;
			case 3:
				eleccionObjeto(rango3, jugador, 3);
				break;
			case 4:
				eleccionObjeto(rango4, jugador, 4);
				break;
			default:
				break;
		}
	} while (opcion != 0);
}

//ELECCION
void eleccionObjeto(Objeto rangoX[5], Heroe& jugador, int rango) {
	int eleccion;
	do {
		tienda.mostrarObjetos(rangoX, rango);
		cout << "Que articulo desea comprar: " << endl;
		cout << "1. Articulo 1" << endl;
		cout << "2. Articulo 2" << endl;
		cout << "3. Articulo 3" << endl;
		cout << "4. Articulo 4" << endl;
		cout << "5. Articulo 5" << endl;
		cout << "0. Salir" << endl;
		cin >> eleccion;
		
		system("cls");
		
		switch (eleccion) {
			case 1:
				comprarUnObjeto(jugador, rangoX, 0);
				break;
			case 2:
				comprarUnObjeto(jugador, rangoX, 1);
				break;
			case 3:
				comprarUnObjeto(jugador, rangoX, 2);
				break;
			case 4:
				comprarUnObjeto(jugador, rangoX, 3);
				break;
			case 5:
				comprarUnObjeto(jugador, rangoX, 4);
				break;
			case 0:
				break;
			default:
				break;
		}
	} while (eleccion != 0);
}

//FUNCION DE COMPRA DE UN SOLO OBJETO
void comprarUnObjeto(Heroe& jugador, Objeto rangoX[5], int numObjeto) {
	if (jugador.dinero < rangoX[numObjeto].precio) {
		system("cls");
		cout << "Dinero insuficiente" << endl;
		system("pause");
		system("cls");
	} else {
		if (jugador.verificarMochilaLLena() == -1) {
			system("cls");
			cout << "Mochila llena" << endl;
			system("pause");
			system("cls");
		} else {
			jugador.dinero = jugador.dinero - rangoX[numObjeto].precio;
			jugador.mochila[jugador.verificarMochilaLLena()] = rangoX[numObjeto];
		}
	}
}
