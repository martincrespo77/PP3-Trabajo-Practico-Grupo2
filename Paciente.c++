//
// Created by M7C on 1/10/2024.
//

#include "Paciente.h++"
#include <iostream>
#include <string>
using namespace std;

// Constructor
Paciente::Paciente(string nom, string ape, int ed, string alerg, string med)
        : Persona(nom, ape, ed), alergias(alerg), medicamentos(med) {}

// Getter para alergias
string Paciente::getAlergias() const {
    return alergias;
}
// Getter para medicamentos
string Paciente::getMedicamentos() const {
    return medicamentos;
}
// Agregar una consulta al historial
void Paciente::agregarConsulta(string consulta) {
    historialConsultas.push_back(consulta);
}
// Mostrar historial de consultas
void Paciente::mostrarHistorial() const {
    cout << "Historial de consultas para " << nombre << " " << apellido << ":\n";
    for (const auto& consulta : historialConsultas) {
        cout << consulta << endl;
    }
}
// Mostrar información del paciente
void Paciente::mostrarInfo() const {
    cout << "Paciente: " << nombre << " " << apellido << ", Edad: " << edad << endl;
}
// Sobrecarga del operador ==
bool Paciente::operator==(const Paciente& other) const {
    return (this->nombre == other.nombre && this->apellido == other.apellido);
}
// Sobrecarga del operador <<
ostream& operator<<(ostream& os, const Paciente& paciente) {
    os << "Paciente: " << paciente.nombre << " " << paciente.apellido
       << ", Edad: " << paciente.edad << ", Alergias: " << paciente.alergias
       << ", Medicamentos: " << paciente.medicamentos;
    return os;
}
// Sobrecarga del operador <
bool Paciente::operator<(const Paciente& other) const {
    return this->edad < other.edad;
}
// Sobrecarga del operador =
Paciente& Paciente::operator=(const Paciente& other) {
    if (this != &other) {
        this->nombre = other.nombre;
        this->apellido = other.apellido;
        this->edad = other.edad;
        this->alergias = other.alergias;
        this->medicamentos = other.medicamentos;
        this->historialConsultas = other.historialConsultas;
    }
    return *this;
}