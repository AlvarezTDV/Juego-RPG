#include <iostream>
#include "claseheroe.h"
#include <cstdlib>
#include <ctime>
using namespace std;

Heroe::Heroe(string no, double s, double af, double arf, int n, double e):Personaje(s, af, arf, n, e){
	nombre = no;
}

void Heroe::estadisticas() {
	Personaje::estadisticas();
	cout << "Nombre del Heroe: " << endl;
}

int Heroe::mover() {
	srand(time(0));
	int probabilidad;
	probabilidad = 1 + rand() % 10; //GENERA UN VALOR ENTRE 1 Y 100
	return probabilidad;
}
