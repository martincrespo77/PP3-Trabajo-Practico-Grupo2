//
// Created by M7C on 1/10/2024.
//

#include "GestorCitas.h++"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

GestorCitas::~GestorCitas() {
    for (Cita* c : listaCitas) {
        delete c;  // Liberar cada cita
    }
}

void GestorCitas::agregarCita(Cita* cita) {
    listaCitas.push_back(cita);
}

void GestorCitas::mostrarCitas() const {
    cout << "Lista de Citas:\n";
    for (const auto& cita : listaCitas) {
        cita->mostrarCita();
    }
}

void GestorCitas::confirmarCita(string fecha) {
    for (auto& cita : listaCitas) {
        if (cita->getFecha() == fecha) {
            cita->confirmarCita();
            return;
        }
    }
    cout << "Cita no encontrada.\n";
}
