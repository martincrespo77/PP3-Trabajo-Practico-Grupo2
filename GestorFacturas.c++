//
// Created by M7C on 1/10/2024.
//

#include "GestorFacturas.h++"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

GestorFacturas::~GestorFacturas() {
    for (Factura* f : listaFacturas) {
        delete f;  // Liberar cada factura
    }
}

void GestorFacturas::agregarFactura(Factura* factura) {
    listaFacturas.push_back(factura);
}

void GestorFacturas::mostrarFacturas() const {
    cout << "\nLista de Facturas:\n";
    for (const auto& factura : listaFacturas) {
        factura->mostrarFactura();
    }
}
