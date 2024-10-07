//
// Created by M7C on 1/10/2024.
//

#include "Receta.h++"
#include <iostream>
#include <string>
using namespace std;


Receta::Receta(Paciente* pac, Medico* med, string medica, string fechaEmision)
        : paciente(pac), medico(med), medicamentos(medica), fecha(fechaEmision) {}

string Receta::getMedicamentos() const {
    return medicamentos;
}

string Receta::getFecha() const {
    return fecha;
}

void Receta::mostrarReceta() const {
    cout << "Receta:\nPaciente: " << paciente->getNombre()
         << "\nMedico: " << medico->getNombre()
         << "\nMedicamentos: " << medicamentos
         << "\nFecha: " << fecha << endl;
}
