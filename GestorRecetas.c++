//
// Created by M7C on 1/10/2024.
//

#include "GestorRecetas.h++"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

GestorRecetas::~GestorRecetas() {
    for (Receta* r : listaRecetas) {
        delete r;  // Liberar cada receta
    }
}

void GestorRecetas::agregarReceta(Receta* receta) {
    listaRecetas.push_back(receta);
}

void GestorRecetas::mostrarRecetas() const {
    cout << "\nLista de Recetas:\n";
    for (const auto& receta : listaRecetas) {
        receta->mostrarReceta();
    }
}
