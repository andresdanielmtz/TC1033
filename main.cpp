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

void intro() {
    vector<Paciente> listaPacientes;
    while (true) {
        int choice;
        cout << "¡Bienvenido al Sistema de Registro Médico!" << endl <<
        "Que desea hacer?" << endl << "1) Añadir nuevo paciente " << endl << "2) Obtener nombre de personas con riesgo." << endl << "3) :O" << endl;
        cin >> choice;
        switch (choice) {
            case 1: {
                string nombre;
                int edad;
                int noSintomas = 0;
                vector<string> sintomas;
                int noDiscapacidades = 0;
                vector<string> discapacidades;
                int noEnfermedades = 0;
                vector<string> enfermedades;

                cout << "Añadiendo nuevo paciente..." << endl;
                cout << "¿Cuál es el nombre del paciente?" << endl;
                cin.ignore(1,'\n');
                getline(cin, nombre);
                cout << "¿Cuál es su edad?" << endl;
                cin >> edad;
                
                cout << "¿Cuántos síntomas tiene?" << endl;
                cin >> noSintomas;
                
                for (int i = 0; i < noSintomas; i++) {
                    cout << "Añadir sintoma no." << i+1 << endl;
                    // cout << "Añadir síntoma" << endl;
                    string sinto;
                    cin.ignore(1, '\n');
                    getline(cin, sinto);
                    
                    sintomas.push_back(sinto);
                }
                Perfil perfil(sintomas);
                
                cout << "¿Cuantas discapacidades tiene?" << endl;
                cin >> noDiscapacidades;
                
                for (int i = 0; i < noDiscapacidades; i++) {
                    cout << "Añadir discapacidad no." << i+1 << endl;
                    // cout << "Añadir síntoma" << endl;
                    string disca;
                    cin.ignore(1, '\n');
                    getline(cin, disca);
                    
                    discapacidades.push_back(disca);
                }
                
                cout << "¿Cuantas enfermedades tiene?" << endl;
                cin >> noEnfermedades;
                for (int i = 0; i < noEnfermedades; i++) {
                    cout << "Añadir enfermedad no." << i+1 << endl;
                    // cout << "Añadir síntoma" << endl;
                    string enfer;
                    cin.ignore(1, '\n');
                    getline(cin, enfer);
                    
                    enfermedades.push_back(enfer);
                }
                
                Paciente newPaciente(nombre, edad, discapacidades, enfermedades, perfil);
                listaPacientes.push_back(newPaciente);
                break;
            }
            case 2: {
                cout << "Obteniendo nombres de personas de riesgo" << endl;
                for (Paciente i : listaPacientes) {
                    if (i.hasRiesgo()) {
                        cout << i.getNombrePaciente() << endl;
                    }
                  }
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
    intro();
    cout << "Hello, World!\n";
    Hospital hos("San Jose");
    cout << "Nombre: " << hos.getNombre() << endl;
    //later must add option to add objects into list : )
    
    vector<string> sintomas = {"Miopia", "Astigmatismo", "Vomito cronico"};
    vector<string> enfermedades = {"Martincitis", "Tanorisiis"};
    vector<string> discapacidades = {"Poblitis", "Andresitis"};
    Perfil cPaciente(sintomas); // comandoPaciente
    Paciente pas("Juan", 30, discapacidades, enfermedades, cPaciente);
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
