//
//  hospital.hpp
//  proyectoFinal
//
//  Created by Andres Daniel  on 25/11/22.
//

#ifndef hospital_hpp
#define hospital_hpp

#include <stdio.h>
#include <string>
#include "Paciente.hpp"
using namespace std;

class Hospital {
private:
    string nombre;
    string paciente = {}; // lista de pacientes
    Paciente apa; 
public:
    Hospital(); 
    Hospital(string cNombre, string paciente);
    string getNombre();
    int getPaciente();
    void setNombre(string);
    void addPaciente(Paciente); // no. de pacientes
};

#endif /* hospital_hpp */
