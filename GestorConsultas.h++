//
// Created by M7C on 1/10/2024.
//

#ifndef PP3CCB_GESTORCONSULTAS_H
#define PP3CCB_GESTORCONSULTAS_H

#include "Consulta.h++"
#include <vector>

using namespace std;

class GestorConsultas {
private:
    vector<Consulta*> listaConsultas;

public:
    ~GestorConsultas();
    void agregarConsulta(Consulta* consulta);
    void eliminarConsulta(string fecha);
    void mostrarConsultas() const;
};

#endif //PP3CCB_GESTORCONSULTAS_H
