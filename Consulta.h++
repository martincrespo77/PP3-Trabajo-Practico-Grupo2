//
// Created by M7C on 1/10/2024.
//

#ifndef PP3CCB_CONSULTA_H
#define PP3CCB_CONSULTA_H
#include <iostream>
#include <string>
#include "Paciente.h++"
#include "Medico.h++"

using namespace std;

class Consulta {
protected:
    Paciente* paciente;
    Medico* medico;
    string fecha;
    string diagnostico;
    string tratamiento;

public:
    Consulta(Paciente* pac, Medico* med, string fec, string diag, string trat);

    Paciente* getPaciente();
    Medico* getMedico();
    string getFecha();
    string getDiagnostico();
    string getTratamiento();

    virtual void mostrarConsulta() const = 0;
};
#endif //PP3CCB_CONSULTA_H
