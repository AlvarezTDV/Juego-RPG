#include <iostream>
#include "claseheroe.h"
#include "claseobjeto.h"
#include <cstdlib>
#include <ctime>
using namespace std;

Heroe::Heroe(string no, int n, Objeto m[20], double s, double st,double af, double arf, double e, double d):Personaje(s, st, af, arf, e, d){
	nivel = n;
	nombre = no;
	for (int i = 0; i < 5; i++) {
		mochila[i] = Objeto();
	}
}

void Heroe::estadisticas() {
	Personaje::estadisticas();
	cout << "Puntos de experiencia: " << experiencia << "/" << nivel*50 << endl;
	cout << "Nivel actual: " << nivel << endl;
	cout << "Nombre del Heroe: " << nombre << endl;
	cout << "Dinero: " << dinero << endl << endl;
	cout << "Objetos obtenidos" << endl;
	if (mochila[0].nombreObjeto == "") {
		cout << "No tienes objetos" << endl;
	} else {
		cout << "Tienes: " << endl;
		for (int i = 0; i < 20; i++) {
			if (mochila[i].nombreObjeto != "") {
				cout << i+1 << ". " << mochila[i].nombreObjeto << endl;
			}
		}
	}
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

int Heroe::verificarMochilaLLena() {
	for (int i = 0; i < 20; i++) {
		if (mochila[i].nombreObjeto == "") {
			return i;
		}
	}
	return -1;
}

void Heroe::aplicarObjetos() {
	for (int i = 0; i < 20; i++) {
		if (mochila[i].nombreObjeto != "") {
			salud = salud + mochila[i].bonoDeSalud;
			saludTotal = saludTotal + mochila[i].bonoDeSalud;
			ataqueFisico = ataqueFisico + mochila[i].bonoDeAtaqueFisico;
			armaduraFisica = armaduraFisica + mochila[i].bonoDeArmaduraFisica;
		}
	}
}

void Heroe::aplicarObjeto(Objeto objetoConseguido) {
	salud = salud + objetoConseguido.bonoDeSalud;
	saludTotal = saludTotal + objetoConseguido.bonoDeSalud;
	ataqueFisico = ataqueFisico + objetoConseguido.bonoDeAtaqueFisico;
	armaduraFisica = armaduraFisica + objetoConseguido.bonoDeArmaduraFisica;
}

void Heroe::descansar() {
	if (salud <= (saludTotal * 0.5)) {
		salud = salud + saludTotal * 0.5;
		cout << "Descansaste y recuperaste vida!!!" << endl;
	} else {
		cout << "No es necesario descansar, aun tienes vida" << endl;
	}
}
