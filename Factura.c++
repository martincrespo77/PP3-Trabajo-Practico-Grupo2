//
// Created by M7C on 1/10/2024.
//

#include "Factura.h++"
#include <iostream>
#include <string>
using namespace std;


Factura::Factura(Paciente* pac, double m, string fechaEmision)
        : paciente(pac), monto(m), fecha(fechaEmision) {}

double Factura::getMonto() const {
    return monto;
}

string Factura::getFecha() const {
    return fecha;
}

void Factura::mostrarFactura() const {
    cout << "Factura:\nPaciente: " << paciente->getNombre()
         << "\nMonto: $" << monto << "\nFecha: " << fecha << endl;
}
