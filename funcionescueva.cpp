#include <iostream>
#include "clases.h"
#include "funciones.h"
#include <ctime>
using namespace std;

//FUNCION DE LAS PELEAS CON DIFERENTES MOUNSTRUOS
void peleaConDragon(Heroe& jugador, Mounstruo dragon) {
	int opcion;
	cout << "Encontraste al gran " << dragon.raza << endl;
		
	system("pause");
	system("cls");
		
	do {
		cout << "// ESTAS EN BATALLA //" << endl;
		cout << "Tu salud: " << jugador.salud << endl;
		cout << "Salud del dragon: " << dragon.salud << endl;
		cout << "1. Ataca" << endl;
		cin >> opcion;
		
		system("cls");
		
		switch (opcion) {
			case 1:
				//SALUD QUE VA BAJANDO EN LA PELEA
				dragon.salud = dragon.salud - (jugador.atacar() - dragon.armaduraFisica);
				jugador.salud = jugador.salud - (dragon.atacar() - jugador.armaduraFisica);
				cout << "Tu y el dragon se atacaron" << endl;
				system("pause");
				system("cls");
				break;
			default:
				break;
		}
	} while (jugador.salud > 0 && dragon.salud > 0);
	
	//COMPROBACION SI GANASTE LA BATALLA
	if (jugador.salud <= 0) {
		cout << "Fuiste derrotado..." << endl;
		jugador.salud = jugador.saludTotal * 0.5;
		system("pause");
	} else {
		cout << "Venciste al dragon..." << endl;
		system("pause");
	}
}

//FUNCION PARA ENTRAR A LA CUEVA
void entrarALaCueva(Heroe& jugador, int opcion) {
	system("cls");
	cout << "Entraste a la cueva del dragon..." << endl;
	do {
		cout << "Escoja que hacer: " << endl;
		cout << "1. Despertar al dragon" << endl;
		cout << "2. Irse sigilosamente" << endl;
		cin >> opcion;
				
		system("cls");
				
		switch (opcion) {
			case 1:
				peleaConDragon(jugador, dragon);
				break;
			case 2:
				break;
			default:
				break;
		}
	} while (opcion != 2 && opcion != 1);
}
