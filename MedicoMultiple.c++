//
// Created by M7C on 1/10/2024.
//

#include "MedicoMultiple.h++"
#include <iostream>
#include <string>
using namespace std;


MedicoMultiple::MedicoMultiple(string nom, string ape, int ed, string mat, string esp, string horario, const vector<string>& especs)
        : Persona(nom, ape, ed), Medico(nom, ape, ed, mat, esp, horario),
          MedicoEspecialista(nom, ape, ed, mat, esp, horario, especs[0]),
          MedicoGeneral(nom, ape, ed, mat, esp, horario),
          cantidadDeEspecializaciones(especs.size()), especializaciones(especs) {}

void MedicoMultiple::mostrarEspecializaciones() const {
    cout << "Especializaciones del médico:\n";
    for (const auto& espec : especializaciones) {
        cout << espec << endl;
    }
}

void MedicoMultiple::diagnosticar(Paciente& paciente) {
    cout << "Médico múltiple diagnosticando a " << paciente.getNombre() << endl;
    mostrarEspecializaciones();
}

void MedicoMultiple::mostrarInfo() const {
    cout << "Médico Múltiple: " << nombre << " " << apellido
         << ", Edad: " << edad << ", Especialidades: ";
    mostrarEspecializaciones();
}
