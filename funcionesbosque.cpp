#include <iostream>
#include "clases.h"
#include "funciones.h"
using namespace std;

void caminar(Heroe jugador) {
	if (jugador.mover() <= 30) {
		cout << "Aparece un mounstruo !!!" << endl;
	}
}
