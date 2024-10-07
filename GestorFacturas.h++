//
// Created by M7C on 1/10/2024.
//

#ifndef PP3CCB_GESTORFACTURAS_H
#define PP3CCB_GESTORFACTURAS_H
#include "Factura.h++"
#include <vector>

using namespace std;

class GestorFacturas {
private:
    vector<Factura*> listaFacturas;

public:
    ~GestorFacturas();
    void agregarFactura(Factura* factura);
    void mostrarFacturas() const;
};

#endif //PP3CCB_GESTORFACTURAS_H
