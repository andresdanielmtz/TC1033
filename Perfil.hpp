//
//  Perfil.hpp
//  proyectoFinal
//
//  Created by Andres Daniel  on 25/11/22.
//

#ifndef Perfil_hpp
#define Perfil_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include <list>

using namespace std;

class Perfil {
private:
    list<string> sintomas;
    bool riesgo;
public:
    Perfil();
    Perfil(list<string> cSintomas);
    list<string> getSintomas();
    void addSintomas(string cSintomas);
    ~Perfil();
};
#endif /* Perfil_hpp */
