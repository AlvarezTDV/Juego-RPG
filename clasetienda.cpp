#include<iostream>
#include "clasetienda.h"
#include "claseobjeto.h"
using namespace std;

Tienda::Tienda() {
	for (int i = 0; i < 5; i++) {
		objetosRango1EnTienda[i] = Objeto();
        objetosRango2EnTienda[i] = Objeto();
        objetosRango3EnTienda[i] = Objeto();
        objetosRango4EnTienda[i] = Objeto();
	}
}
void Tienda::mostrarObjetos(Objeto rangoX[], int rango) { 
	cout << "Los objetos de rango " << rango << " son:" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "// " << rangoX[i].nombreObjeto << " //"<< endl;
		cout << "Bono de salud: " << rangoX[i].bonoDeSalud << endl;
		cout << "Bono de ataque: " << rangoX[i].bonoDeAtaqueFisico << endl;
		cout << "Bono de armadura: " << rangoX[i].bonoDeArmaduraFisica << endl;
		cout << "Precio del objeto: " << rangoX[i].precio << endl << endl;
	}
}

/*void venderObjetosAlHeroe(){
	
}*/
