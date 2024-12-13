#include <iostream>
#include "clases.h"
#include "funciones.h"
#include <ctime>
#include <fstream>
#include <sstream>
using namespace std;

void guardarPartida(Heroe jugador, ofstream& archivoDeGuardado) {
	char aux;
	archivoDeGuardado.open("partidaGuardada.txt");
	archivoDeGuardado << "Nombre: " << jugador.nombre << endl;
	archivoDeGuardado << "Salud Actual: " << jugador.salud << "/" << jugador.saludTotal << endl;
	archivoDeGuardado << "Ataque: " << jugador.ataqueFisico << endl;
	archivoDeGuardado << "Armadura: " << jugador.armaduraFisica << endl;
	archivoDeGuardado << "Nivel: " << jugador.nivel << endl;
	archivoDeGuardado << "Experiencia: " << jugador.experiencia << "/" << jugador.nivel * 50 << endl;
	archivoDeGuardado << "Dinero: " << jugador.dinero << endl;
	archivoDeGuardado << "Mochila: " << endl;
	if (jugador.mochila[0].nombreObjeto == "") {
		archivoDeGuardado << "No tienes objetos" << endl;
	} else {
		for (int i = 0; i < 20; i++) {
			if (jugador.mochila[i].nombreObjeto != "") {
				archivoDeGuardado << i+1 << ". " << jugador.mochila[i].nombreObjeto << endl;
			}
		}
	}
	archivoDeGuardado.close();
}

void cargarPartida(Heroe& jugador, ifstream& archivoDeCargado) {
    archivoDeCargado.open("partidaGuardada.txt");
    if (!archivoDeCargado.is_open()) {
        cout << "Error al abrir el archivo de guardado." << endl;
        return;
    }

    string linea;
    while (getline(archivoDeCargado, linea)) {
        stringstream ss(linea);
        string clave;
        string basura;
        ss >> clave;

        if (clave == "Nombre:") {
            ss.ignore(); // Ignora el espacio
            getline(ss, jugador.nombre); // Resto de la línea es el nombre
        } else if (clave == "Salud") {
            string basura; // Para leer palabras intermedias
            ss >> basura >> jugador.salud;
            ss.ignore(); // Ignora la barra '/'
            ss >> jugador.saludTotal;
        } else if (clave == "Ataque:") {
            ss >> jugador.ataqueFisico;
        } else if (clave == "Armadura:") {
            ss >> jugador.armaduraFisica;
        } else if (clave == "Nivel:") {
            ss >> jugador.nivel;
        } else if (clave == "Experiencia:") {
            ss >> jugador.experiencia;
            ss.ignore(); // Ignora la barra '/'
            ss >> basura; // Para leer el "nivel * 50"
        } else if (clave == "Dinero:") {
            ss >> jugador.dinero;
        } else if (clave == "Mochila:") {
            int index = 0;
            while (getline(archivoDeCargado, linea) && !linea.empty()) {
                stringstream ssMochila(linea);
                if (linea.find("No tienes objetos") != string::npos) {
                    break;
                }
                string basura;
                ssMochila >> index >> basura; // Lee el índice y el punto
                ssMochila.ignore(); // Ignora el espacio después del punto
        
		        // Asegúrate de leer correctamente el nombre del objeto
		        string nombreObjeto;
		        getline(ssMochila >> std::ws, nombreObjeto); // Ignora espacios en blanco antes del nombre
		        if (index > 0 && index <= 20) { // Validar índice
		            jugador.mochila[index - 1].nombreObjeto = nombreObjeto;
		        }
            }
        }
    }
    archivoDeCargado.close();
}
