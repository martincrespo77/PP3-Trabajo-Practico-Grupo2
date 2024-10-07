//
// Created by M7C on 1/10/2024.
//

#include "MedicoGeneral.h++"
#include <iostream>
#include <string>
using namespace std;


MedicoGeneral::MedicoGeneral(string nom, string ape, int ed, string mat, string esp, string horario)
        : Persona(nom, ape, ed), Medico(nom, ape, ed, mat, esp, horario) {}

void MedicoGeneral::diagnosticar(Paciente& paciente) {
    cout << "Medico general diagnosticando a " << paciente.getNombre() << endl;
}

void MedicoGeneral::mostrarInfo() const {
    cout << "Medico General: " << nombre << " " << apellido
         << ", Edad: " << edad << ", Especialidad: " << especialidad << endl;
}
