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

Paciente::Paciente(string cNombre, short cEdad, string cDiscapacidades, Perfil cPaciente) {
    nombrePaciente = cNombre;
    edad = cEdad;
    discapacidades = cDiscapacidades;
    paciente = cPaciente; // perfil paciente :)
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

string Paciente::getNombrePaciente() {
    return nombrePaciente;
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
    int riskCondition = 0;
    if (getEdad() < 18 || getEdad() > 65) {
        riskCondition += 1;
    }
    if (size(getEnfermedades()) > 0) {
        riskCondition += 1;
    }
    if (size(getDiscapacidades()) > 0) {
        riskCondition += 1;
    }
    // barbones function, can be optimized
    return (riskCondition >= 2);
}

