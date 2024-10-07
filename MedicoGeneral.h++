//
// Created by M7C on 1/10/2024.
//

#ifndef PP3CCB_MEDICOGENERAL_H
#define PP3CCB_MEDICOGENERAL_H
#include "Medico.h++"

class MedicoGeneral : virtual public Medico {
public:
    MedicoGeneral(string nom, string ape, int ed, string mat, string esp, string horario);

    void diagnosticar(Paciente& paciente) override;
    void mostrarInfo() const override;
};

#endif //PP3CCB_MEDICOGENERAL_H
