#ifndef CLASEPERSONAJE_H
#define CLASEPERSONAJE_H
#include <iostream>
using namespace std;

//CREACION DE LA CLASE PERSONAJE
class Personaje {
	//ATRIBUTOS
	private:
		double salud;
		double ataqueFisico;
		double armaduraFisica;
		int nivel;
		double experiencia;
	
	//FUNCIONES
	public:
		//CONSTRUCTOR
		Personaje() {
			salud = 100;
			ataqueFisico = 10;
			armaduraFisica = 3;
			nivel = 0;
			experiencia = 0;
		}
		
		double atacar(double ataqueFisico) {
			return ataqueFisico;
		}
};
#endif
