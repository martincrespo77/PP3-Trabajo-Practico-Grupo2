//
// Created by M7C on 1/10/2024.
//

#include "Persona.h++"


using namespace std;

Persona::Persona(string nom, string ape, int ed) : nombre(nom), apellido(ape), edad(ed) {}

string Persona::getNombre() const {
    return nombre;
}

string Persona::getApellido() const {
    return apellido;
}

int Persona::getEdad() const {
    return edad;
}