#include <iostream>
#include "claseheroe.h"
#include <cstdlib>
#include <ctime>
using namespace std;

Heroe::Heroe(string no, int n, double s, double af, double arf, double e):Personaje(s, af, arf, e){
	nivel = n;
	nombre = no;
}

void Heroe::estadisticas() {
	Personaje::estadisticas();
	cout << "Puntos de experiencia: " << experiencia << "/" << nivel*50 << endl;
	cout << "Nivel actual: " << nivel << endl;
	cout << "Nombre del Heroe: " << nombre << endl << endl;
}

int Heroe::mover() {
	srand(time(0));
	int probabilidad;
	probabilidad = 1 + rand() % 10; //GENERA UN VALOR ENTRE 1 Y 100
	return probabilidad;
}

bool Heroe::puedeSubirNivel() {
	double experienciaRequerida = nivel * 50;
	if (experiencia >= experienciaRequerida) {
		experiencia = experiencia - experienciaRequerida;
		return true;
	} else {
		return false;
	}
}

void Heroe::subirNivel() {
	switch (nivel) {
		case 2: {
			salud = salud + 20;
			saludTotal = saludTotal + 20;
			ataqueFisico = ataqueFisico + 2;
			armaduraFisica = armaduraFisica + 1;
			break;
		}
	}
}
