//
//  Paciente.hpp
//  proyectoFinal

//  Andrés Daniel Martínez Bermúdez - A00227463
//  Santiago Poblete Talamante - A01254609
//  30 de Noviembre del 2022

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
    int sumSintomas = 0;
public:
    Paciente();
    Paciente(string cNombre, short cEdad, vector<string> cDiscapacidades, vector<string> cEnfermedades,  Perfil cPaciente);
    short getEdad();
    vector<string> getDiscapacidades();
    vector<string> getEnfermedades();
    string getNombrePaciente();
    int getSumSintomas();
    void setNombre(string);
    void setEdad(short);
    void addDiscapacidades(string);
    void addEnfermedades(string);
    bool hasRiesgo();
    int hasRiskCovid();
    ~Paciente();
};
#endif /* Paciente_hpp */

