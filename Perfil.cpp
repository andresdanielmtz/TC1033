//
//  Perfil.cpp
//  proyectoFinal
//
//  Andrés Daniel Martínez Bermúdez - A00227463
//  Santiago Poblete Talamante - A01254609
//  30 de Noviembre del 2022

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
