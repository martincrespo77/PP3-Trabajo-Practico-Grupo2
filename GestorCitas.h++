//
// Created by M7C on 1/10/2024.
//

#ifndef PP3CCB_GESTORCITAS_H
#define PP3CCB_GESTORCITAS_H
#include "Cita.h++"
#include <vector>

using namespace std;

class GestorCitas {
private:
    vector<Cita*> listaCitas;

public:
    ~GestorCitas();
    void agregarCita(Cita* cita);
    void mostrarCitas() const;
    void confirmarCita(string fecha);
};
#endif //PP3CCB_GESTORCITAS_H
