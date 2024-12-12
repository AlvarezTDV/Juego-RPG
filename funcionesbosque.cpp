#include <iostream>
#include "clases.h"
#include "funciones.h"
#include <ctime>
using namespace std;

Mounstruo bestiaSalvaje("Bestia", 50, 10, 2, 10);
Mounstruo muertoViviente("Zombi", 100, 20, 5, 20);
Mounstruo demonio("Demonio", 150, 30, 10, 40);

//FUNCION QUE SIRVE COMO TRANSICION
void contadorTiempo() {
	time_t inicio = time(0);
	time_t final;
	
	do {
		final = time(0);
	} while (final - inicio < 0.75);
	cout << ". ";
	do {
		final = time(0);
	} while (final - inicio < 1.5);
	cout << ". ";
	do {
		final = time(0);
	} while (final - inicio < 2.25);
	cout << ". " << endl;
	do {
		final = time(0);
	} while (final - inicio < 3);
	system("cls");
}

//FUNCION DE LAS PELEAS CON DIFERENTES MOUNSTRUOS
void peleaConMounstruo(Heroe& jugador, Mounstruo mounstruo) {
	int opcion;
	cout << "Encontraste un(a) " << mounstruo.raza << endl;
		
	system("pause");
	system("cls");
		
	do {
		cout << "// ESTAS EN BATALLA //" << endl;
		cout << "Tu salud: " << jugador.salud << endl;
		cout << "Salud del mounstruo: " << mounstruo.salud << endl;
		cout << "1. Ataca" << endl;
		cout << "2. Usar Objeto" << endl;
		cin >> opcion;
		
		system("cls");
		
		switch (opcion) {
			case 1:
				mounstruo.salud = mounstruo.salud - (jugador.atacar() - mounstruo.armaduraFisica);
				jugador.salud = jugador.salud - (mounstruo.atacar() - jugador.armaduraFisica);
				cout << "Tu y el mounstruo se atacaron" << endl;
				
				system("pause");
				system("cls");
				break;
			case 2:
				break;
			default:
				break;
		}
	} while (jugador.salud > 0 && mounstruo.salud > 0);
	if (jugador.salud <= 0) {
		cout << "Fuiste derrotado..." << endl;
		system("pause");
	} else {
		cout << "Venciste al mounstruo..." << endl;
		system("pause");
	}
}

//FUNCION DE BATALLA DONDE SE PODRA PELEAR CON LOS MOUNSTRUOS
void batalla(Heroe& jugador, Mounstruo mounstruo1, Mounstruo mounstruo2, Mounstruo mounstruo3) {
	if (jugador.nivel <= 4) {
		peleaConMounstruo(jugador, mounstruo1);
	} else if (jugador.nivel <= 7) {
		peleaConMounstruo(jugador, mounstruo2);
	} else {
		peleaConMounstruo(jugador, mounstruo3);
	}
}

//FUNCION PARA CAMINAR, HAY 30 DE PROBABILIDAD PARA ENCONTRAR UN MOUNSTRUO
void caminar(Heroe& jugador, int opcion) {
	system("cls");
	contadorTiempo();
	
	if (jugador.mover() <= 5) {
		cout << "Aparece un mounstruo !!!" << endl;
		
		bestiaSalvaje.estadisticas();
		muertoViviente.estadisticas();
		demonio.estadisticas();
		
		do {
			cout << "Escoja que hacer: " << endl;
			cout << "1. Atacar" << endl;
			cout << "2. Huir" << endl;
			cin >> opcion;
					
			system("cls");
					
			switch (opcion) {
				case 1:
					batalla(jugador, bestiaSalvaje, muertoViviente, demonio);
					break;
				case 2:
					break;
				default:
					break;
			}
		} while (opcion != 2 && opcion != 1);
	} else {
		cout << "No encontraste nada..." << endl;
		system("pause");
	}
}
