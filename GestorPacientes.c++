//
// Created by M7C on 1/10/2024.
//

#include "GestorPacientes.h++"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

GestorPacientes::~GestorPacientes() {
    for (Paciente* p : listaPacientes) {
        delete p;  // Liberar cada paciente
    }
}

void GestorPacientes::agregarPaciente(Paciente* paciente) {
    listaPacientes.push_back(paciente);
}

void GestorPacientes::eliminarPaciente(string nombre) {
    for (auto it = listaPacientes.begin(); it != listaPacientes.end(); ++it) {
        if ((*it)->getNombre() == nombre) {
            delete *it;  // Liberar memoria del paciente
            listaPacientes.erase(it);
            cout << "Paciente eliminado.\n";
            return;
        }
    }
    cout << "Paciente no encontrado.\n";
}

Paciente* GestorPacientes::buscarPaciente(string nombre) const {
    for (const auto& paciente : listaPacientes) {
        if (paciente->getNombre() == nombre) {
            return paciente;
        }
    }
    return nullptr;
}

void GestorPacientes::mostrarPacientes() const {
    for (const auto& paciente : listaPacientes) {
        cout << *paciente << endl;  // Usa la sobrecarga del operador <<
    }
}

void GestorPacientes::ordenarPacientesPorEdad() {
    sort(listaPacientes.begin(), listaPacientes.end(), [](Paciente* a, Paciente* b) {
        return *a < *b;
    });
}
