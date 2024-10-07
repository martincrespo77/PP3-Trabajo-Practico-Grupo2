//
// Created by M7C on 1/10/2024.
//

#ifndef PP3CCB_PERSONA_H
#define PP3CCB_PERSONA_H
#include <string>
using namespace std;
class Persona {
protected:
    string nombre;
    string apellido;
    int edad;

public:
    Persona(string nom, string ape, int ed);

    string getNombre() const;
    string getApellido() const;
    int getEdad() const;

    virtual void mostrarInfo() const = 0;  // Clase abstracta
};
#endif //PP3CCB_PERSONA_H
