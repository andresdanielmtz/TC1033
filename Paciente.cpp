//
//  Paciente.cpp
//  proyectoFinal
//
//  Created by Andres Daniel  on 25/11/22.
//

#include "Paciente.hpp"

Paciente::Paciente() {
    nombrePaciente = "";
    edad = 0;
    discapacidades = {};
    enfermedades = {};
}

Paciente::Paciente(string cNombre, short cEdad, string cDiscapacidades) {
    nombrePaciente = cNombre;
    edad = cEdad;
    discapacidades = cDiscapacidades;
}

short Paciente::getEdad() {
    return edad;
}

string Paciente::getDiscapacidades() {
    return discapacidades;
}

string Paciente::getEnfermedades() {
    return enfermedades;
}

void Paciente::setNombre(string cNombre) {
    nombrePaciente = cNombre;
}

void Paciente::setEdad(short cEdad) {
    edad = cEdad;
}

void Paciente::setDiscapacidades(string cDiscapacidades) {
    discapacidades = cDiscapacidades;
}

void Paciente::setEnfermedades(string cEnfermedades) {
    enfermedades = cEnfermedades;
}

bool Paciente::riesgo() {
    // to add functionality
    return false;
}

