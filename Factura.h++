//
// Created by M7C on 1/10/2024.
//

#ifndef PP3CCB_FACTURA_H
#define PP3CCB_FACTURA_H
#include <iostream>
#include <string>
#include "Paciente.h++"

class Factura {
private:
    Paciente* paciente;
    double monto;
    string fecha;

public:
    Factura(Paciente* pac, double m, string fechaEmision);

    double getMonto() const;
    string getFecha() const;
    void mostrarFactura() const;
};
#endif //PP3CCB_FACTURA_H
