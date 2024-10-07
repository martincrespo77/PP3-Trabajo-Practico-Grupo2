//
// Created by M7C on 1/10/2024.
//

#ifndef PP3CCB_GESTORRECETAS_H
#define PP3CCB_GESTORRECETAS_H
#include "Receta.h++"
#include <vector>

using namespace std;

class GestorRecetas {
private:
    vector<Receta*> listaRecetas;

public:
    ~GestorRecetas();
    void agregarReceta(Receta* receta);
    void mostrarRecetas() const;
};
#endif //PP3CCB_GESTORRECETAS_H
