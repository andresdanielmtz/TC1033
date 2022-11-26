//
//  hospital.cpp
//  proyectoFinal
//
//  Created by Andres Daniel  on 25/11/22.
//

#include "Hospital.hpp"
#include "Paciente.hpp"
Hospital::Hospital() {
    
}

Hospital::Hospital(string cNombre) {
    nombre = cNombre;
    
}

string Hospital::getNombre() {
    return nombre;
}

string Hospital::getPaciente() {
    return listPaciente;
}

void Hospital::setNombre(string cNombre) {
    nombre = cNombre;
}

void Hospital::addPaciente(Paciente cPaciente) {
    
}

Hospital::~Hospital() {}
