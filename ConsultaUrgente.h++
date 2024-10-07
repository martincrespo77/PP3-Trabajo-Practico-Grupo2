//
// Created by M7C on 1/10/2024.
//

#ifndef PP3CCB_CONSULTAURGENTE_H
#define PP3CCB_CONSULTAURGENTE_H
#include "Consulta.h++"

class ConsultaUrgente : public Consulta {
private:
    int nivelUrgencia;  // 1 = baja, 2 = media, 3 = alta urgencia

public:
    ConsultaUrgente(Paciente* pac, Medico* med, string fec, string diag, string trat, int nivel);

    bool esAltaUrgencia() const;
    void mostrarConsulta() const override;
};
#endif //PP3CCB_CONSULTAURGENTE_H
