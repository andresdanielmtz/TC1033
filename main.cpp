//
//  main.cpp
//  proyectoFinal
//
//  Created by Andres Daniel  on 25/11/22.
//

#include <iostream>
#include <string>
#include <list>
#include "Hospital.hpp"
#include <vector> // why ??? ?
#include <fstream>
#include "Paciente.hpp"
#include "Perfil.hpp"
using namespace std;


int intro() {
    string nombreHospital;
    cout << "Insertar nombre del Hospital:" << endl;
    getline(cin, nombreHospital);
    vector<Paciente> listaPacientes;
    Hospital cHos(nombreHospital, listaPacientes);
    
    while (true) {
        int choice;
        cout << "¡Bienvenido al Sistema de Registro Médico " << cHos.getNombre() << "!" << endl << endl <<
        "Favor de seleccionar una de las siguientes opciones:" << endl << "1) Añadir nuevo paciente " << endl << "2) Obtener nombre de personas con riesgo." << endl << "3) Obtener nombre de personas con sintomas de COVID-19." << endl << "4) Salir" << endl;
        cin >> choice;
        switch (choice) {
            case 1: {
                cHos.addPaciente();
                break;
            }
            case 2: {
                cHos.resultadosRiesgo();
                break;
            }
            case 3: {
                cHos.resultadosCovid();
                break;
            }
            case 4: {
                cout << "Saliendo..." << endl;
                return 0;
                break;
            }
            default: {
                cout << "Por favor escoge una opción válida, ¡gracias!" << endl;
                break;
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    intro();
    return 0;
}
