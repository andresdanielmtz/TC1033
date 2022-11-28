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
#include "Paciente.hpp"
#include "Perfil.hpp"
using namespace std;

void intro() {
    list<Paciente> listaPacientes;
    while (true) {
        int choice;
        cout << "¡Bienvenido al Sistema de Registro Médico!" << endl <<
        "Que desea hacer?" << endl << "1) Añadir nuevo paciente " << endl << "2) :D" << endl << "3) :O" << endl;
        cin >> choice;
        switch (choice) {
            case 1: {
                string nombre;
                int edad;
                int noSintomas;
                list<string> sintomas;
                int noDiscapacidades;
                list<string> discapacidades;
                
                cout << "Añadiendo nuevo paciente..." << endl;
                cout << "¿Cuál es el nombre del paciente?" << endl;
                cin >> nombre;
                cout << "¿Cuál es su edad?" << endl;
                cin >> edad;
                cout << "¿Cuántos síntomas tiene?" << endl;
                cin >> noSintomas;
                for (int i = 0; i < noSintomas; i++) {
                    string sinto;
                    cout << "Añadir sintoma no." << i+1 << endl;
                    cin >> sinto;
                    sintomas.push_back(sinto);
                }
                Perfil perfil(sintomas);
                
                cout << "¿Cuantas discapacidades tiene?" << endl;
                cin >> noDiscapacidades;
                for (int i = 0; i < noDiscapacidades; i++) {
                    string disca;
                    cout << "Añadir sintoma no." << i+1 << endl;
                    cin >> disca;
                    discapacidades.push_back(disca);
                }
                
                Paciente newPaciente(nombre, edad, discapacidades, perfil);
                listaPacientes.push_back(newPaciente);
                break;
            }
            case 2: {
                cout << ":D" << endl;
                break;
            }
            case 3: {
                cout << "amosae" << endl;
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
    // intro();
    cout << "Hello, World!\n";
    Hospital hos("San Jose");
    cout << "Nombre: " << hos.getNombre() << endl;
    //later must add option to add objects into list : )
    
    list<string> sintomas = {"Miopia", "Astigmatismo", "Vomito cronico"};
    list<string> enfermedades = {};
    
    Perfil cPaciente(sintomas); // comandoPaciente
    Paciente pas("Juan", 30, enfermedades, cPaciente);
    cout << pas.getNombrePaciente() << endl;
    hos.addPaciente(pas);
    
    if (pas.hasRiskCovid()) {
        cout << "Tiene riesgo de covid :(" << endl;
    }
    else {
        cout << "No tiene riesgo de covid" << endl;
    }
    // cout << pas.hasRiesgo() << endl; // ??
    if (!(pas.hasRiesgo())) {
        cout << pas.getNombrePaciente() << " No tiene riesgo" << endl;
    }
    else {
        cout << pas.getNombrePaciente() << " si tiene riesgo..." << endl;
    }
    list<Paciente> lis = hos.getPaciente(); // get list of pacientes
    // cout << lis[0].getNombrePaciente() << endl;
        for (int i = 0; i < size(lis); i++)
    {
        cout << "Sinoidal" << endl;
       //  cout <<  << endl;
    }
    
    /*
    list<Paciente> pacienteLista = new list<Paciente>();
    
    for (int i = 0; i < size(pacienteLista); i++) {
        cout << pacienteLista[i] << endl;
    }
    */
    return 0;
}
