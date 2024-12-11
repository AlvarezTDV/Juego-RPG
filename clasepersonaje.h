#ifndef CLASEPERSONAJE_H
#define CLASEPERSONAJE_H
#include <iostream>
using namespace std;

//CREACION DE LA CLASE PERSONAJE
class Personaje {
	//ATRIBUTOS
	public:
		double salud;
		double ataqueFisico;
		double armaduraFisica;
		int nivel;
		double experiencia;
	
	//FUNCIONES
	public:
		//CONSTRUCTOR
		Personaje(double s, double af, double arf, int n, double e);
		
		void estadisticas();
		
		double atacar(double ataqueFisico);
};
#endif
