#include <iostream>
#include "claseheroe.h"
#include <cstdlib>
#include <ctime>
using namespace std;

Heroe::Heroe(string no, int n, double s, double af, double arf, double e, double d):Personaje(s, af, arf, e, d){
	nivel = n;
	nombre = no;
}

void Heroe::estadisticas() {
	Personaje::estadisticas();
	cout << "Puntos de experiencia: " << experiencia << "/" << nivel*50 << endl;
	cout << "Nivel actual: " << nivel << endl;
	cout << "Nombre del Heroe: " << nombre << endl;
	cout << "Dinero: " << dinero << endl << endl;
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
		nivel++;
		return true;
	} else {
		return false;
	}
}

void Heroe::subirNivel() {
	saludTotal = saludTotal + 20;
	salud = saludTotal;
	ataqueFisico = ataqueFisico + 2;
	armaduraFisica = armaduraFisica + 1;
	cout << "Subiste de nivel!!!" << endl;
}
