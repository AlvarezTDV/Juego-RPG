#ifndef CLASES_H
#define CLASES_H
#include <iostream>
using namespace std;

//CREACION DE LA CLASE PERSONAJE
class Personaje {
	//ATRIBUTOS
	private:
		double salud;
		double ataqueFisico;
		double ataqueMagico;
		double armaduraFisica;
		double armaduraMagica;
		int nivel;
		double experiencia;
	
	//FUNCIONES
	public:
		//CONSTRUCTOR
		Personaje() {
			salud = 100;
			ataqueFisico = 10;
			ataqueMagico = 10;
			armaduraFisica = 3;
			armaduraMagica = 2;
			nivel = 0;
			experiencia = 0;
		}
		
		virtual void atacar();
};

//CREACION DE LA CLASE HEROE (HERENCIA)
class Heroe : public Personaje {
	//ATRIBUTOS
	private:
		string nombre;
	
	//FUNCIONES
	public:
		//CONSTRUCTOR
		Heroe() : Personaje() {
			nombre = "SinNombre";
		}
		
		virtual void mover();
		virtual void buscarObjetos();
		virtual void ComprarObjetos();
		virtual void venderObjetos();
		virtual void recogerObjetos();
		virtual void agregarExperiencia();
};

//CREACION DE LA CLASE MOUNSTRUO (HERENCIA)
class Mounstruo : public Personaje {
	//ATRIBUTOS
	private:
		string raza
	
	//FUNCIONES
	public:
		//CONSTRUCTOR
		Mounstruo() : Personaje() {
			raza = "SinRaza";
		}
		
		virtual void soltarObjeto();
		virtual void soltarExperiencia();
		virtual void generarExperiencia();
};

//CREACION DE LA CLASE OBJETO
class Objeto {
	//ATRIBUTOS
	private:
		double bonoDeSalud;
		double bonoDeAtaqueFisico;
		double bonoDeAtaqueMagico;
		double bonoDeArmaduraFisica;
		double bonoDeArmaduraMagica;
		double bonoDeExperiencia;
	
	//FUNCIONES
	public:
		//CONSTRUCTOR
		Objeto() {
			bonoDeSalud = 0;
			bonoDeAtaqueFisico = 0;
			bonoDeAtaqueMagico = 0;
			bonoDeArmaduraFisica = 0;
			bonoDeArmaduraMagica = 0;
			bonoDeExperiencia = 0;
		}
		
		virtual void aplicarAtributos();
};

//CREACION DE LA CLASE TIENDA
class Tienda {
	//ATRIBUTOS
	private:
		Objeto objetosEnTienda[10];
	
	//FUNCIONES
	public:
		//CONSTRUCTOR
		Tienda() {
			//objetosEnTienda[10] = 
		}
		
		virtual void mostrarObjetos();
		virtual void venderObjetosAlHeroe();
};
