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
#include <iostream>
#include <list>
using namespace std;

class Hospital {
private:
    string nombre;
    list<Paciente> listPaciente; // lista de pacientes
    Paciente apa;
public:
    Hospital();
    Hospital(string cNombre);
    string getNombre();
    list<Paciente> getPaciente(); // return list of paciente
    void setNombre(string);
    void addPaciente(Paciente); // add pacient 
    ~Hospital();
};

#endif /* hospital_hpp */
