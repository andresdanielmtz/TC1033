//
//  Paciente.hpp
//  proyectoFinal
//
//  Created by Andres Daniel  on 25/11/22.
//

#ifndef Paciente_hpp
#define Paciente_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include <list>
using namespace std;
#include "Perfil.hpp"

class Paciente {
private:
    string nombrePaciente;
    short edad;
    Perfil perfil;
    vector<string> discapacidades;
    vector<string> enfermedades;
public:
    Paciente();
    Paciente(string cNombre, short cEdad, vector<string> cDiscapacidades, vector<string> cEnfermedades,  Perfil cPaciente);
    short getEdad();
    vector<string> getDiscapacidades();
    vector<string> getEnfermedades();
    string getNombrePaciente();
    void setNombre(string);
    void setEdad(short);
    void addDiscapacidades(string);
    void addEnfermedades(string);
    bool hasRiesgo();
    bool hasRiskCovid(); 
    ~Paciente();
};
#endif /* Paciente_hpp */

