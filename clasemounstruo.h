#ifndef CLASEMOUNSTRUO_H
#define CLASEMOUNSTRUO_H
#include "clasepersonaje.h"
#include <iostream>
using namespace std;

//CREACION DE LA CLASE MOUNSTRUO (HERENCIA)
class Mounstruo : public Personaje {
	//ATRIBUTOS
	public:
		string raza;
	
	//FUNCIONES
	public:
		//CONSTRUCTOR
		Mounstruo(string r, double s, double st, double af, double arf, double e, double d);
		
		void estadisticas();
};
#endif
