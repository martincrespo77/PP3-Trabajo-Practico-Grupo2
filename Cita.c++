//
// Created by M7C on 1/10/2024.
//

#include "Cita.h++"
#include <iostream>
#include <string>
using namespace std;


Cita::Cita(Paciente* pac, Medico* med, string fechaCita)
        : paciente(pac), medico(med), fecha(fechaCita), confirmada(false) {}

string Cita::getFecha() const {
    return fecha;
}

bool Cita::estaConfirmada() const {
    return confirmada;
}

void Cita::confirmarCita() {
    confirmada = true;
    cout << "La cita ha sido confirmada.\n";
}

void Cita::mostrarCita() const {
    cout << "Cita:\nPaciente: " << paciente->getNombre()
         << "\nMedico: " << medico->getNombre()
         << "\nFecha: " << fecha
         << "\nEstado: " << (confirmada ? "Confirmada" : "No confirmada") << endl;
}
