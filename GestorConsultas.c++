//
// Created by M7C on 1/10/2024.
//

#include "GestorConsultas.h++"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

GestorConsultas::~GestorConsultas() {
    for (Consulta* c : listaConsultas) {
        delete c;  // Liberar cada consulta
    }
}

void GestorConsultas::agregarConsulta(Consulta* consulta) {
    listaConsultas.push_back(consulta);
}

void GestorConsultas::eliminarConsulta(string fecha) {
    for (auto it = listaConsultas.begin(); it != listaConsultas.end(); ++it) {
        if ((*it)->getFecha() == fecha) {
            delete *it;  // Liberar memoria de la consulta
            listaConsultas.erase(it);
            cout << "Consulta eliminada.\n";
            return;
        }
    }
    cout << "Consulta no encontrada.\n";
}

void GestorConsultas::mostrarConsultas() const {
    cout << "Lista de Consultas:\n";
    for (const auto& consulta : listaConsultas) {
        consulta->mostrarConsulta();
    }
}
