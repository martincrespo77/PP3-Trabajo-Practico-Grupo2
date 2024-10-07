//
// Created by M7C on 1/10/2024.
//

#include "MedicoEspecialista.h++"
#include <iostream>
#include <string>

using namespace std;

MedicoEspecialista::MedicoEspecialista(string nom, string ape, int ed, string mat, string esp, string horario, string espec)
        : Persona(nom, ape, ed), Medico(nom, ape, ed, mat, esp, horario), especializacion(espec) {}

string MedicoEspecialista::getEspecializacion() const {
    return especializacion;
}

void MedicoEspecialista::diagnosticar(Paciente& paciente) {
    cout << "Especialista en " << especializacion << " diagnosticando a " << paciente.getNombre() << endl;
}

void MedicoEspecialista::mostrarInfo() const {
    cout << "Medico Especialista: " << nombre << " " << apellido
         << ", Edad: " << edad << ", Especialización: " << especializacion << endl;
}
