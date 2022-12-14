//
//  Paciente.cpp
//  proyectoFinal
//
//  Andrés Daniel Martínez Bermúdez - A00227463
//  Santiago Poblete Talamante - A01254609
//  30 de Noviembre del 2022

#include "Paciente.hpp"
#include <list>
#include <string>
#include <iostream>
using namespace std;

Paciente::Paciente() {
    nombrePaciente = "";
    edad = 0;
    discapacidades = {};
    enfermedades = {};
}

Paciente::Paciente(string cNombre, short cEdad, vector<string> cDiscapacidades, vector<string> cEnfermedades, Perfil cPerfil) {
    nombrePaciente = cNombre;
    edad = cEdad;
    discapacidades = cDiscapacidades;
    perfil = cPerfil; // perfil paciente :)
    enfermedades = cEnfermedades;
}

short Paciente::getEdad() {
    return edad;
}

vector<string> Paciente::getDiscapacidades() {
    return discapacidades;
}

vector<string> Paciente::getEnfermedades() {
    return enfermedades;
}

string Paciente::getNombrePaciente() {
    return nombrePaciente;
}

int Paciente::getSumSintomas()  {
    return sumSintomas;
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

int Paciente::hasRiskCovid() {
    int sumSintomas = 0;
    vector<string> sintomasCovid = {
        "tos",
        "gripe",
        "calentura",
        "dolor de cabeza",
        "cuerpo cortado",
        "cansancio",
        "perdida del gusto",
        "perdida del olfato",
    };
    for (int i = 0; i < size(perfil.getSintomas()); i++) {
        for (int j = 0; j < size(sintomasCovid); j++) {
            if (perfil.getSintomas()[i] == sintomasCovid[j]) {
                sumSintomas += 1;
            }
        }
    }
    cout << "Nombre: " << nombrePaciente << endl;
    cout << "No. de sintomas related to covid: " << sumSintomas << endl;
    return sumSintomas;
    // return (size(perfil.getSintomas()) > 1);
}

Paciente::~Paciente() {}
