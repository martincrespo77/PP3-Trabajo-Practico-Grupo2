//
// Created by M7C on 1/10/2024.
//

#include "Medico.h++"
#include <iostream>
#include <string>

using namespace std;


Medico::Medico(string nom, string ape, int ed, string mat, string esp, string horario)
        : Persona(nom, ape, ed), matricula(mat), especialidad(esp), horarioAtencion(horario), consultasAsignadas(0) {}

string Medico::getEspecialidad() const {
    return especialidad;
}

void Medico::mostrarDatosPaciente(const Paciente& paciente) const {
    cout << "Datos del Paciente:\n";
    cout << "Nombre: " << paciente.nombre << " " << paciente.apellido << "\n";
    cout << "Edad: " << paciente.edad << "\n";
    cout << "Alergias: " << paciente.alergias << "\n";
    cout << "Medicamentos: " << paciente.medicamentos << "\n";
}

bool Medico::operator==(const Medico& other) const {
    return (this->nombre == other.nombre && this->apellido == other.apellido);
}

bool Medico::operator<(const Medico& other) const {
    return this->edad < other.edad;
}

ostream& operator<<(ostream& os, const Medico& medico) {
    os << "Medico: " << medico.nombre << " " << medico.apellido
       << ", Especialidad: " << medico.especialidad
       << ", Matricula: " << medico.matricula;
    return os;
}

Medico& Medico::operator=(const Medico& other) {
    if (this != &other) {
        this->nombre = other.nombre;
        this->apellido = other.apellido;
        this->edad = other.edad;
        this->matricula = other.matricula;
        this->especialidad = other.especialidad;
        this->horarioAtencion = other.horarioAtencion;
        this->consultasAsignadas = other.consultasAsignadas;
    }
    return *this;
}
