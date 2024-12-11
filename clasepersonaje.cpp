#include <iostream>
#include "clasepersonaje.h"
#include <cstdlib>
#include <ctime>
using namespace std;

Personaje::Personaje(double s, double af, double arf, int n, double e) {
	salud = s;
	ataqueFisico = af;
	armaduraFisica = arf;
	nivel = n;
	experiencia = e;
}

void Personaje::estadisticas() {
	cout << "Salud: " << salud << endl;
	cout << "Ataque Fisico: " << ataqueFisico << endl;
	cout << "Armadura Fisica: " << armaduraFisica << endl;
	cout << "Nivel actual: " << nivel << endl;
	cout << "Puntos de experiencia totales: " << experiencia << endl;
}

double Personaje::atacar(double ataqueFisico) {
	return ataqueFisico;
}
