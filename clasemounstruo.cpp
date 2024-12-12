#include <iostream>
#include "clasemounstruo.h"
#include <cstdlib>
#include <ctime>
using namespace std;

Mounstruo::Mounstruo(string r, double s, double af, double arf, double e):Personaje(s, af, arf, e) {
	raza = r;
}

void Mounstruo::estadisticas() {
	Personaje::estadisticas();
	cout << "Raza del mounstruo: " << raza << endl;
}



