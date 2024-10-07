//
// Created by M7C on 1/10/2024.
//

#ifndef PP3CCB_PACIENTE_H
#define PP3CCB_PACIENTE_H

#include <iostream>
#include <vector>
#include <string>
#include "Persona.h++"  // Si Paciente hereda de Persona
using namespace std;

class Paciente : public Persona {
private:
    string alergias;
    string medicamentos;
    vector<string> historialConsultas;
    // Declarar a Medico como friend
    friend class Medico;
public:
    Paciente(string nom, string ape, int ed, string alerg, string med);

    string getAlergias() const;
    string getMedicamentos() const;
    void agregarConsulta(string consulta);
    void mostrarHistorial() const;
    void mostrarInfo() const override;

    // Sobrecarga del operador ==
    bool operator==(const Paciente& other) const;

    // Sobrecarga del operador <<
    friend ostream& operator<<(ostream& os, const Paciente& paciente);

    // Sobrecarga del operador <
    bool operator<(const Paciente& other) const;

    // Sobrecarga del operador =
    Paciente& operator=(const Paciente& other);
};


#endif //PP3CCB_PACIENTE_H
