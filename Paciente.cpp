//
//  Paciente.cpp
//  proyectoFinal
//
//  Created by Andres Daniel  on 25/11/22.
//

#include "Paciente.hpp"
#include <list>
#include <string>

Paciente::Paciente() {
    nombrePaciente = "";
    edad = 0;
    discapacidades = {};
    enfermedades = {};
}

Paciente::Paciente(string cNombre, short cEdad, list<string> cDiscapacidades, Perfil cPerfil) {
    nombrePaciente = cNombre;
    edad = cEdad;
    discapacidades = cDiscapacidades;
    perfil = cPerfil; // perfil paciente :)
}

short Paciente::getEdad() {
    return edad;
}

list<string> Paciente::getDiscapacidades() {
    return discapacidades;
}

list<string> Paciente::getEnfermedades() {
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

void Paciente::addDiscapacidades(string cDiscapacidades) {
    discapacidades.push_back(cDiscapacidades);
}

void Paciente::addEnfermedades(string cEnfermedades) {
    enfermedades.push_back(cEnfermedades);
}

bool Paciente::hasRiesgo() { // does this work ??
    int riskCondition = 0;
    if (edad < 18 || edad > 65) {
        riskCondition += 1;
    }
    if (size(getEnfermedades()) > 0) {
        riskCondition += 1;
    }
    if (size(getDiscapacidades()) > 0) {
        riskCondition += 1;
    }
    // barebones function, can be optimized
    return (riskCondition >= 2);
}

bool Paciente::hasRiskCovid() {
    return (size(perfil.getSintomas()) > 1);
}

Paciente::~Paciente() {}
