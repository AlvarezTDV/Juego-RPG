#ifndef CLASEOBJETO_H
#define CLASEOBJETO_H
#include <iostream>
using namespace std;

//CREACION DE LA CLASE OBJETO
class Objeto {
	//ATRIBUTOS
	private:
		double bonoDeSalud;
		double bonoDeAtaqueFisico;
		double bonoDeArmaduraFisica;
		double bonoDeExperiencia;
	
	//FUNCIONES
	public:
		//CONSTRUCTOR
		Objeto() {
			bonoDeSalud = 0;
			bonoDeAtaqueFisico = 0;
			bonoDeArmaduraFisica = 0;
			bonoDeExperiencia = 0;
		}
		
		virtual void aplicarAtributos();
};
#endif
