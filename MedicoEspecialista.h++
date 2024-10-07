//
// Created by M7C on 1/10/2024.
//

#ifndef PP3CCB_MEDICOESPECIALISTA_H
#define PP3CCB_MEDICOESPECIALISTA_H
#include "Medico.h++"

class MedicoEspecialista : virtual public Medico {
private:
    string especializacion;

public:
    MedicoEspecialista(string nom, string ape, int ed, string mat, string esp, string horario, string espec);

    string getEspecializacion() const;
    void diagnosticar(Paciente& paciente) override;
    void mostrarInfo() const override;
};

#endif //PP3CCB_MEDICOESPECIALISTA_H
