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
#include "Paciente.hpp"
#include "Perfil.hpp"
using namespace std;

void intro(string nombre) {
    vector<Paciente> listaPacientes;
    Hospital cHos(nombre, listaPacientes);
    while (true) {
        int choice;
        cout << "¡Bienvenido al Sistema de Registro Médico!" << endl <<
        "Que desea hacer?" << endl << "1) Añadir nuevo paciente " << endl << "2) Obtener nombre de personas con riesgo." << endl << "3) Obtener nombre de personas con sintomas de COVID-19." << endl;
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
            default: {
                cout << "Por favor escoge una opción válida, ¡gracias!" << endl;
                break;
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    
    intro("San Jose");
    return 0;
}
