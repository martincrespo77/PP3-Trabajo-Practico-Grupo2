//
// Created by M7C on 1/10/2024.
//

#include "GestorMedicos.h++"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

GestorMedicos::~GestorMedicos() {
    for (Medico* m : listaMedicos) {
        delete m;  // Liberar cada médico
    }
}

void GestorMedicos::agregarMedico(Medico* medico) {
    listaMedicos.push_back(medico);
}

void GestorMedicos::eliminarMedico(string nombre) {
    for (auto it = listaMedicos.begin(); it != listaMedicos.end(); ++it) {
        if ((*it)->getNombre() == nombre) {
            delete *it;  // Liberar memoria del médico
            listaMedicos.erase(it);
            cout << "Medico eliminado.\n";
            return;
        }
    }
    cout << "Medico no encontrado.\n";
}

Medico* GestorMedicos::buscarMedico(string nombre) const {
    for (const auto& medico : listaMedicos) {
        if (medico->getNombre() == nombre) {
            return medico;
        }
    }
    return nullptr;
}

void GestorMedicos::mostrarMedicos() const {
    for (const auto& medico : listaMedicos) {
        cout << *medico << endl;  // Usa la sobrecarga del operador <<
    }
    cout << "-------------------------------------\n";
}

void GestorMedicos::ordenarMedicosPorEdad() {
    sort(listaMedicos.begin(), listaMedicos.end(), [](Medico* a, Medico* b) {
        return *a < *b;
    });
}
