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

Hospital::Hospital(string cNombre) {
    nombre = cNombre;
    
}

string Hospital::getNombre() {
    return nombre;
}

list<Paciente> Hospital::getPaciente() {
    return listPaciente;
}

void Hospital::setNombre(string cNombre) {
    nombre = cNombre;
}

void Hospital::addPaciente(Paciente cPaciente) {
    listPaciente.push_back(cPaciente);
    cout << "Añadido paciente. Nombre: " << cPaciente.getNombrePaciente() << endl;
}

Hospital::~Hospital() {}
