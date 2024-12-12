#ifndef CLASEPERSONAJE_H
#define CLASEPERSONAJE_H
#include <iostream>
using namespace std;

//CREACION DE LA CLASE PERSONAJE
class Personaje {
	//ATRIBUTOS
	public:
		double salud;
		double saludTotal;
		double ataqueFisico;
		double armaduraFisica;
		double experiencia;
		double dinero;
	
	//FUNCIONES
	public:
		//CONSTRUCTOR
		Personaje(double s, double af, double arf, double e, double d);
		
		void estadisticas();
		double atacar();
};
#endif
