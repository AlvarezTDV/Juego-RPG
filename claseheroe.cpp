#include <iostream>
#include "claseheroe.h"
#include <cstdlib>
#include <ctime>
using namespace std;

Heroe :: Heroe(string nombre) {
	nombre = "SinNombre";
}

int Heroe::mover() {
	srand(time(0));
	int probabilidad;
	probabilidad = 1 + rand() % 10; //GENERA UN VALOR ENTRE 1 Y 100
	return probabilidad;
}
