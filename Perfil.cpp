//
//  Perfil.cpp
//  proyectoFinal
//
//  Created by Andres Daniel  on 25/11/22.
//
#include "Perfil.hpp"

Perfil::Perfil() {
    sintomas = {};
    riesgo = false;
}

Perfil::Perfil(string cSintomas) {
    sintomas = cSintomas;
}

string Perfil::getSintomas() {
    return sintomas;
}

void Perfil::setSintomas(string cSintomas) {
    sintomas = cSintomas;
}

bool Perfil::hasCovid() {
    // to add functionality
    
    return false;
}

Perfil::~Perfil() {} 
