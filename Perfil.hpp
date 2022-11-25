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

using namespace std;

class Perfil {
private:
    string sintomas = {};
    bool riesgo;
public:
    Perfil();
    Perfil(string cSintomas);
    string getSintomas();
    void setSintomas(string cSintomas);
    bool hasCovid();
};
#endif /* Perfil_hpp */
