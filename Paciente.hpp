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
using namespace std;

class Paciente {
private:
    string nombrePaciente;
    short edad;
    string discapacidades = {};
    string enfermedades = {};
public:
    Paciente();
    Paciente(string cNombre, short cEdad, string cDiscapacidades);
    short getEdad();
    string getDiscapacidades();
    string getEnfermedades();
    void setNombre(string);
    void setEdad(short);
    void setDiscapacidades(string);
    void setEnfermedades(string);
    bool riesgo();
};
#endif /* Paciente_hpp */

