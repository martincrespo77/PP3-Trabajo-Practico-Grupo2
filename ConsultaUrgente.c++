//
// Created by M7C on 1/10/2024.
//

#include "ConsultaUrgente.h++"
#include <iostream>
#include <string>
using namespace std;


ConsultaUrgente::ConsultaUrgente(Paciente* pac, Medico* med, string fec, string diag, string trat, int nivel)
        : Consulta(pac, med, fec, diag, trat), nivelUrgencia(nivel) {}

bool ConsultaUrgente::esAltaUrgencia() const {
    return nivelUrgencia == 3;
}

void ConsultaUrgente::mostrarConsulta() const {
    cout << "Consulta Urgente\nFecha: " << fecha << "\nDiagnostico: " << diagnostico
         << "\nTratamiento: " << tratamiento
         << "\nNivel de Urgencia: " << nivelUrgencia
         << (esAltaUrgencia() ? " (Alta Urgencia)" : "") << endl;
    cout << "-------------------------------------\n";
}
