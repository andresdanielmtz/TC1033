//
//  hospital.cpp
//  proyectoFinal
//
//  Created by Andres Daniel  on 25/11/22.
//

#include "Hospital.hpp"
#include "Paciente.hpp"
#include <string>
#include <list>

Hospital::Hospital() {
    
}

Hospital::Hospital(string cNombre, vector<Paciente> cHospital) {
    nombre = cNombre;
    listPaciente = cHospital; 
    
}

string Hospital::getNombre() {
    return nombre;
}

vector<Paciente> Hospital::getPaciente() {
    return listPaciente;
}

void Hospital::setNombre(string cNombre) {
    nombre = cNombre;
}

void Hospital::addPaciente() {
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
    listPaciente.push_back(newPaciente); //
    cout << "Añadido paciente. Nombre: " << newPaciente.getNombrePaciente() << endl;
}

void Hospital::resultadosCovid() {
    float n = size(listPaciente);
    if (n <= 0) {
        cout << "Añade clientes primero" << endl;
    }
    else {
        cout << "Obteniendo nombres de personas de riesgo" << endl;
        for (Paciente i : listPaciente) {
            if (i.hasRiesgo()) {
                cout << i.getNombrePaciente() << endl;
            }
          }
    }
}

void Hospital::resultadosRiesgo() {
    float n = size(listPaciente);
    if (n <= 0) {
        cout << "Añade clientes primero" << endl;
    }
    else {
        for (int i = 0; i < n; i++) {
            listPaciente[i].hasRiskCovid();
        }
    }
    cout << "amosae" << endl;
}

Hospital::~Hospital() {}
