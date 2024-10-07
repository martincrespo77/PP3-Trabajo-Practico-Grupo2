//
// Created by M7C on 1/10/2024.
//

#ifndef PP3CCB_MEDICO_H
#define PP3CCB_MEDICO_H


#include <iostream>
#include <string>
#include "Persona.h++"  // Si Medico hereda de Persona
#include "Persona.h++"
#include "Paciente.h++"
using namespace std;

class Medico : virtual public Persona {
protected:
    string matricula;
    string especialidad;
    string horarioAtencion;
    int consultasAsignadas;

public:
    Medico(string nom, string ape, int ed, string mat, string esp, string horario);

    virtual string getEspecialidad() const;
    virtual void diagnosticar(Paciente& paciente) = 0;  // Método abstracto
    void mostrarDatosPaciente(const Paciente& paciente) const;

    // Sobrecarga del operador ==
    bool operator==(const Medico& other) const;

    // Sobrecarga del operador <<
    friend ostream& operator<<(ostream& os, const Medico& medico);

    // Sobrecarga del operador <
    bool operator<(const Medico& other) const;

    // Sobrecarga del operador =
    Medico& operator=(const Medico& other);
};



#endif //PP3CCB_MEDICO_H
