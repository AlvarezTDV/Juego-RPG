#include <iostream>
#include "clasepersonaje.h"
#include <cstdlib>
#include <ctime>
using namespace std;

Personaje::Personaje(double s, double af, double arf, double e, double d) {
	salud = s;
	saludTotal = s;
	ataqueFisico = af;
	armaduraFisica = arf;
	experiencia = e;
	dinero = d;
}

void Personaje::estadisticas() {
	cout << "Salud: " << salud << "/" << saludTotal << endl;
	cout << "Ataque Fisico: " << ataqueFisico << endl;
	cout << "Armadura Fisica: " << armaduraFisica << endl;
}

double Personaje::atacar() {
	return ataqueFisico;
}


