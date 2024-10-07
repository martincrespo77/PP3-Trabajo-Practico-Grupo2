//
// Created by M7C on 1/10/2024.
//

#ifndef PP3CCB_RECETA_H
#define PP3CCB_RECETA_H

#include <iostream>
#include <string>
#include "Paciente.h++"
#include "Medico.h++"

class Receta {
private:
    Paciente* paciente;
    Medico* medico;
    string medicamentos;
    string fecha;

public:
    Receta(Paciente* pac, Medico* med, string medica, string fechaEmision);

    string getMedicamentos() const;
    string getFecha() const;
    void mostrarReceta() const;
};
#endif //PP3CCB_RECETA_H
