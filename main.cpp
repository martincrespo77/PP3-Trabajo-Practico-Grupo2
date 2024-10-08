#include <iostream>
#include <algorithm>
#include "Menu_Gestion.h++"
#include "GestorPacientes.h++"
#include "GestorMedicos.h++"
#include "MedicoMultiple.h++"
#include "MedicoGeneral.h++"
#include "MedicoEspecialista.h++"
#include "GestorConsultas.h++"
#include "ConsultaProgramada.h++"
#include "ConsultaUrgente.h++"
#include "GestorCitas.h++"
#include "GestorRecetas.h++"
#include "GestorFacturas.h++"

using namespace std;


int main() {
    // Inicializar gestores
    GestorPacientes gestorPacientes;
    GestorMedicos gestorMedicos;
    GestorConsultas gestorConsultas;
    GestorCitas gestorCitas;
    GestorRecetas gestorRecetas;
    GestorFacturas gestorFacturas;

    // Crear pacientes
    Paciente* paciente1 = new Paciente("Juan", "Perez", 30, "Penicilina", "Paracetamol");
    Paciente* paciente2 = new Paciente("Maria", "Lopez", 25, "Ninguna", "Ibuprofeno");
    Paciente* paciente3 = new Paciente("Carlos", "Gomez", 45, "Gluten", "Loratadina");

    // Agregar pacientes al gestor de pacientes
    gestorPacientes.agregarPaciente(paciente1);
    gestorPacientes.agregarPaciente(paciente2);
    gestorPacientes.agregarPaciente(paciente3);

    // Crear médicos
    MedicoGeneral* medico1 = new MedicoGeneral("Roberto", "Garcia", 50, "12345", "Clinica General", "9:00 - 18:00");
    MedicoEspecialista* medico2 = new MedicoEspecialista("Ana", "Rodriguez", 40, "67890", "Cardiologia", "10:00 - 16:00", "Cardiologia");
    MedicoMultiple* medico3 = new MedicoMultiple("Luis", "Martinez", 55, "54321", "Dermatologia", "8:00 - 14:00", vector<string>{"Dermatologia", "Oncologia"});

    // Agregar médicos al gestor de médicos
    gestorMedicos.agregarMedico(medico1);
    gestorMedicos.agregarMedico(medico2);
    gestorMedicos.agregarMedico(medico3);

    // Crear consultas
    ConsultaUrgente* consulta1 = new ConsultaUrgente(paciente1, medico1, "05-Oct-2024", "Fiebre alta", "Reposo", 3);
    ConsultaProgramada* consulta2 = new ConsultaProgramada(paciente2, medico2, "07-Oct-2024", "Chequeo de rutina", "Nada", "10:00");
    ConsultaUrgente* consulta3 = new ConsultaUrgente(paciente3, medico3, "08-Oct-2024", "Reacción alérgica", "Antihistamínico", 2);

    // Agregar consultas al gestor de consultas
    gestorConsultas.agregarConsulta(consulta1);
    gestorConsultas.agregarConsulta(consulta2);
    gestorConsultas.agregarConsulta(consulta3);

    // Crear citas
    Cita* cita1 = new Cita(paciente1, medico1, "09-Oct-2024");
    Cita* cita2 = new Cita(paciente2, medico2, "10-Oct-2024");
    Cita* cita3 = new Cita(paciente3, medico3, "11-Oct-2024");

    // Agregar citas al gestor de citas
    gestorCitas.agregarCita(cita1);
    gestorCitas.agregarCita(cita2);
    gestorCitas.agregarCita(cita3);

    // Crear recetas
    Receta* receta1 = new Receta(paciente1, medico1, "Paracetamol 500mg", "06-Oct-2024");
    Receta* receta2 = new Receta(paciente2, medico2, "Ibuprofeno 400mg", "07-Oct-2024");
    Receta* receta3 = new Receta(paciente3, medico3, "Loratadina 10mg", "08-Oct-2024");

    // Agregar recetas al gestor de recetas
    gestorRecetas.agregarReceta(receta1);
    gestorRecetas.agregarReceta(receta2);
    gestorRecetas.agregarReceta(receta3);

    // Crear facturas
    Factura* factura1 = new Factura(paciente1, 100.50, "06-Oct-2024");
    Factura* factura2 = new Factura(paciente2, 200.75, "07-Oct-2024");
    Factura* factura3 = new Factura(paciente3, 300.20, "08-Oct-2024");

    // Agregar facturas al gestor de facturas
    gestorFacturas.agregarFactura(factura1);
    gestorFacturas.agregarFactura(factura2);
    gestorFacturas.agregarFactura(factura3);

    // Mostrar el menú principal y permitir la interacción
    int opcion;
    do {
        mostrarMenu();  // Llamada al menú
        cin >> opcion;
        cin.ignore();  // Limpiar buffer

        switch (opcion) {
            case 1:
                gestionarPacientes(gestorPacientes);
                break;
            case 2:
                gestionarMedicos(gestorMedicos, gestorPacientes);
                break;
            case 3:
                gestionarConsultas(gestorConsultas, gestorPacientes, gestorMedicos);
                break;
            case 4:
                gestionarRecetas(gestorRecetas, gestorPacientes, gestorMedicos);
                break;
            case 5:
                gestionarFacturas(gestorFacturas, gestorPacientes);
                break;
            case 6:
                gestionarCitas(gestorCitas, gestorPacientes, gestorMedicos);
                break;
            case 0:
                cout << "Saliendo del sistema...\n";
                break;
            default:
                cout << "Opción no válida.\n";
        }
    } while (opcion != 0);

    // Limpiar memoria
    delete paciente1;
    delete paciente2;
    delete paciente3;
    delete medico1;
    delete medico2;
    delete medico3;
    delete consulta1;
    delete consulta2;
    delete consulta3;
    delete cita1;
    delete cita2;
    delete cita3;
    delete receta1;
    delete receta2;
    delete receta3;
    delete factura1;
    delete factura2;
    delete factura3;

    return 0;
}
