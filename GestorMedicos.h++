//
// Created by M7C on 1/10/2024.
//

#ifndef PP3CCB_GESTORMEDICOS_H
#define PP3CCB_GESTORMEDICOS_H
#include "Medico.h++"
#include <vector>

using namespace std;

class GestorMedicos {
private:
    vector<Medico*> listaMedicos;

public:
    ~GestorMedicos();
    void agregarMedico(Medico* medico);
    void eliminarMedico(string nombre);
    Medico* buscarMedico(string nombre) const;
    void mostrarMedicos() const;
    void ordenarMedicosPorEdad();
};
#endif //PP3CCB_GESTORMEDICOS_H
