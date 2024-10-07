//
// Created by M7C on 1/10/2024.
//

#ifndef PP3CCB_CITA_H
#define PP3CCB_CITA_H
#include <iostream>
#include <string>
#include "Paciente.h++"
#include "Medico.h++"

class Cita {
private:
    Paciente* paciente;
    Medico* medico;
    string fecha;
    bool confirmada;

public:
    Cita(Paciente* pac, Medico* med, string fechaCita);

    string getFecha() const;
    bool estaConfirmada() const;
    void confirmarCita();
    void mostrarCita() const;
};
#endif //PP3CCB_CITA_H
