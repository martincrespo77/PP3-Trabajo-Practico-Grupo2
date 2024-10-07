//
// Created by M7C on 1/10/2024.
//

#ifndef PP3CCB_GESTORPACIENTES_H
#define PP3CCB_GESTORPACIENTES_H
#include "Paciente.h++"
#include <vector>

using namespace std;

class GestorPacientes {
private:
    vector<Paciente*> listaPacientes;

public:
    ~GestorPacientes();
    void agregarPaciente(Paciente* paciente);
    void eliminarPaciente(string nombre);
    Paciente* buscarPaciente(string nombre) const;
    void mostrarPacientes() const;
    void ordenarPacientesPorEdad();
};

#endif //PP3CCB_GESTORPACIENTES_H
