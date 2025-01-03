#include <iostream>
#include "clases.h"
#include "funciones.h"
#include <ctime>
using namespace std;

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
		cin >> opcion;
		
		system("cls");
		
		switch (opcion) {
			case 1:
				//SALUD QUE VA BAJANDO EN LA PELEA
				mounstruo.salud = mounstruo.salud - (jugador.atacar() * (1 / (1 + (mounstruo.armaduraFisica / 10))));
				jugador.salud = jugador.salud - (mounstruo.atacar() * (1 / (1 + (jugador.armaduraFisica / 10))));
				cout << "Tu y el mounstruo se atacaron" << endl;
				system("pause");
				system("cls");
				break;
			default:
				break;
		}
	} while (jugador.salud > 0 && mounstruo.salud > 0);
	
	//COMPROBACION PARA SUBIR DE EXPERIENCIA
	if (jugador.salud <= 0) {
		cout << "Fuiste derrotado..." << endl;
		jugador.salud = jugador.saludTotal * 0.3;
		system("pause");
	} else {
		cout << "Venciste al mounstruo..." << endl;
		//SUBIDA DE EXPERIENCIA
		jugador.experiencia = jugador.experiencia + mounstruo.experiencia;
		//SUBIDA DE DINERO
		jugador.dinero = jugador.dinero + mounstruo.dinero;
		if(jugador.puedeSubirNivel() == true) {
			//SUBIDA DE NIVEL
			jugador.subirNivel();
		}
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
	
	if (jugador.mover() <= 7) {
		cout << "Aparece un mounstruo !!!" << endl;
		
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
