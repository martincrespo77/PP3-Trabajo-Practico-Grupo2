//
// Created by M7C on 1/10/2024.
//

#ifndef PP3CCB_CONSULTAPROGRAMADA_H
#define PP3CCB_CONSULTAPROGRAMADA_H
#include "Consulta.h++"

class ConsultaProgramada : public Consulta {
private:
    string horaProgramada;

public:
    ConsultaProgramada(Paciente* pac, Medico* med, string fec, string diag, string trat, string hora);

    void reprogramarConsulta(string nuevaFecha, string nuevaHoraProgramada);
    void mostrarConsulta() const override;
};
#endif //PP3CCB_CONSULTAPROGRAMADA_H
