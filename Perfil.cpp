//
//  Perfil.cpp
//  proyectoFinal
//
//  Created by Andres Daniel  on 25/11/22.
//
#include "Perfil.hpp"
#include <list>
#include <string>
using namespace std;

Perfil::Perfil() {
    list<string> sintomas = {};
    riesgo = false;
}

Perfil::Perfil(list<string> cSintomas) {
    sintomas = cSintomas;
}

list<string> Perfil::getSintomas() {
    return sintomas;
}

void Perfil::addSintomas(string cSintomas) {
    sintomas.push_back(cSintomas);
}

Perfil::~Perfil() {} 
