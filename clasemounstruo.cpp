#include <iostream>
#include "clasemounstruo.h"
#include <cstdlib>
#include <ctime>
using namespace std;

Mounstruo::Mounstruo(string r, double s, double af, double arf, int n, double e):Personaje(s, af, arf, n, e) {
	raza = r;
}


