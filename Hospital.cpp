//
//  hospital.cpp
//  proyectoFinal
//
//  Andrés Daniel Martínez Bermúdez - A00227463
//  Santiago Poblete Talamante - A01254609
//  30 de Noviembre del 2022


#include "Hospital.hpp"
#include "Paciente.hpp"
#include <string>
#include <iostream>
#include <fstream>
#include<cstdlib>
#include <algorithm>
#include <vector>

Hospital::Hospital() {}

Hospital::Hospital(string cNombre) {
    nombre = cNombre;
    vector<Paciente> listPaciente;
    ofstream myfile;
    myfile.open("riesgo.txt");
    ofstream covid;
    covid.open("covid.txt");

}

string Hospital::getNombre() {
    return nombre;
}

Paciente Hospital::getPaciente(int pos) {
    return listPaciente[pos]; 
    
  }
// vector metodo buscar elementos

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
    if (noSintomas > 0) {
        cout << "Añadir síntoma(s):" << endl;
        
        for (int i = 0; i < noSintomas; i++) {
            // cout << "Añadir sintoma no." << i+1 << "\n";
            // cout << "Añadir síntoma" << endl;
            string sinto;
            //getline(cin, sinto);
            cin >> sinto;
            sintomas.push_back(sinto);
        }
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
    if (newPaciente.hasRiesgo() > 0) {
        cout << "Nombre: " << nombre << endl;
        ofstream writtin;
        writtin.open("riesgo.txt");
        writtin << nombre << endl;
        writtin.close();
    }
    if (newPaciente.hasRiskCovid()) {
        ofstream covidEscritura;
        covidEscritura.open("covid.txt");
        covidEscritura << nombre << endl;
        covidEscritura.close();
    }
    cout << "Añadido paciente. Nombre: " << newPaciente.getNombrePaciente() << endl;
}

void Hospital::resultadosRiesgo() {
    float n = size(listPaciente);
    if (n <= 0) {
        cout << "Añade clientes primero" << endl;
    }
    else {
        cout << endl << "Nombre de personas de Riesgo: " << endl;
        ifstream readFile;
        readFile.open("riesgo.txt");
        string text;
        while(getline(readFile,text, '\n')) {
            cout<<text<<endl;
        }
    }
}

void Hospital::resultadosCovid() {
    float n = size(listPaciente);
    if (n <= 0) {
        cout << "Añade clientes primero" << endl;
    }
    else {
        cout << endl << "Nombre de personas con sintomas relacionados al COVID-19: " << endl;
        ifstream readFile;
        readFile.open("covid.txt");
        string text;
        while(getline(readFile,text, '\n')) {
            cout<<text<<endl;
        }
    }
}

Hospital::~Hospital() {}
