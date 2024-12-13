#ifndef FUNCIONESARCHIVOS_H
#define FUNCIONESARCHIVOS_H
#include "clases.h"
#include <iostream>
#include <fstream>
using namespace std;

void guardarPartida(Heroe, ofstream&);
void cargarPartida(Heroe&, ifstream&);

#endif
