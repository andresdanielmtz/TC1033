//
//  hospital.cpp
//  proyectoFinal
//
//  Created by Andres Daniel  on 25/11/22.
//

#include "Hospital.hpp"

Hospital::Hospital() {
    
}

Hospital::Hospital(string cNombre, string cPaciente) {
    nombre = cNombre;
    paciente = cPaciente;
}

string Hospital::getNombre() {
    return nombre;
}

int Hospital::getPaciente() {
    return sizeof(paciente);
}

void Hospital::setNombre(string cNombre) {
    nombre = cNombre;
}

void Hospital::setPacientes(int num) {
    // ???
}
