//
//  Perfil.cpp
//  proyectoFinal
//
//  Created by Andres Daniel  on 25/11/22.
//
#include "Perfil.hpp"
#include <list>
#include <string>
#include <vector>
using namespace std;

Perfil::Perfil() {
    list<string> sintomas = {};
    riesgo = false;
}

Perfil::Perfil(vector<string> cSintomas) {
    sintomas = cSintomas;
}

vector<string> Perfil::getSintomas() {
    return sintomas;
}

void Perfil::addSintomas(string cSintomas) {
    sintomas.push_back(cSintomas);
}

Perfil::~Perfil() {} 
