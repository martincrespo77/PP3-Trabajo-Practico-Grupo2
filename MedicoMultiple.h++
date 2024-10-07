//
// Created by M7C on 1/10/2024.
//

#ifndef PP3CCB_MEDICOMULTIPLE_H
#define PP3CCB_MEDICOMULTIPLE_H
#include "MedicoEspecialista.h++"
#include "MedicoGeneral.h++"
#include <vector>

class MedicoMultiple : virtual public MedicoEspecialista, virtual public MedicoGeneral {
private:
    int cantidadDeEspecializaciones;
    vector<string> especializaciones;

public:
    MedicoMultiple(string nom, string ape, int ed, string mat, string esp, string horario, const vector<string>& especs);

    void agregarEspecializacion(string nuevaEspecializacion);
    void mostrarEspecializaciones() const;
    void diagnosticar(Paciente& paciente) override;
    void mostrarInfo() const override;
};
#endif //PP3CCB_MEDICOMULTIPLE_H
