//
// Created by M7C on 1/10/2024.
//

#include "Consulta.h++"
#include <iostream>
#include <string>
using namespace std;


Consulta::Consulta(Paciente* pac, Medico* med, string fec, string diag, string trat)
        : paciente(pac), medico(med), fecha(fec), diagnostico(diag), tratamiento(trat) {}

Paciente* Consulta::getPaciente() {
    return paciente;
}

Medico* Consulta::getMedico() {
    return medico;
}

string Consulta::getFecha() {
    return fecha;
}

string Consulta::getDiagnostico() {
    return diagnostico;
}

string Consulta::getTratamiento() {
    return tratamiento;
}
