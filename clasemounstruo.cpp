#include <iostream>
#include "clasemounstruo.h"
#include <cstdlib>
#include <ctime>
using namespace std;

Mounstruo::Mounstruo(string r, double s, double st, double af, double arf, double e, double d):Personaje(s, st, af, arf, e, d) {
	raza = r;
}

void Mounstruo::estadisticas() {
	Personaje::estadisticas();
	cout << "Raza del mounstruo: " << raza << endl;
	cout << "Dinero que otorga: " << dinero << endl << endl;
}



