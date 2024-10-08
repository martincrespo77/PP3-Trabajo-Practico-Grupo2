//
// Created by M7C on 1/10/2024.
//

#include "ConsultaProgramada.h++"
#include <iostream>
#include <string>
using namespace std;


ConsultaProgramada::ConsultaProgramada(Paciente* pac, Medico* med, string fec, string diag, string trat, string hora)
        : Consulta(pac, med, fec, diag, trat), horaProgramada(hora) {}

void ConsultaProgramada::reprogramarConsulta(string nuevaFecha, string nuevaHoraProgramada) {
    fecha = nuevaFecha;
    horaProgramada = nuevaHoraProgramada;
    cout << "Consulta reprogramada para el " << fecha << " a las " << horaProgramada << endl;
}

void ConsultaProgramada::mostrarConsulta() const {
    cout << "Consulta Programada\nFecha: " << fecha << "\nHora: " << horaProgramada
         << "\nDiagnostico: " << diagnostico << "\nTratamiento: " << tratamiento << endl;
    cout << "-------------------------------------\n";
}
