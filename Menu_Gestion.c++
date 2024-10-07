//
// Created by M7C on 1/10/2024.
//
#include "Menu_Gestion.h++"
#include "ConsultaUrgente.h++"
#include "ConsultaProgramada.h++"
#include <iostream>
#include <string>
using namespace std;

void mostrarMenu() {
    cout << "\n--- Menu de Opciones ---\n";
    cout << "1. Gestionar Pacientes\n";
    cout << "2. Gestionar Medicos\n";
    cout << "3. Gestionar Consultas\n";
    cout << "4. Generar Recetas\n";
    cout << "5. Generar Facturas\n";
    cout << "6. Gestionar Citas\n";
    cout << "0. Salir\n";
    cout << "Seleccione una opcion: ";
}
void gestionarPacientes(GestorPacientes& gestorPacientes) {
    int opcion;
    cout << "\n--- Gestion de Pacientes ---\n";
    cout << "1. Agregar Paciente\n";
    cout << "2. Eliminar Paciente\n";
    cout << "3. Mostrar Pacientes\n";
    cout << "4. Ordenar Pacientes por Edad\n";  // Nueva opción para ordenar por edad
    cout << "0. Volver al menu principal\n";
    cout << "Seleccione una opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1: {
            string nombre, apellido, alergias, medicamentos;
            int edad;
            cout << "Ingrese el nombre: ";
            cin.ignore();
            cin >> nombre;
            cout << "Ingrese el apellido: ";
            cin.ignore();
            cin >> apellido;
            cout << "Ingrese la edad: ";
            cin.ignore();
            cin >> edad;
            cout << "Ingrese las alergias: ";
            cin.ignore();
            cin >> alergias;
            cout << "Ingrese los medicamentos actuales: ";
            cin.ignore();
            cin >> medicamentos;
            Paciente* nuevoPaciente = new Paciente(nombre, apellido, edad, alergias, medicamentos);
            gestorPacientes.agregarPaciente(nuevoPaciente);
            cout << "Paciente agregado con exito.\n";
            break;
        }
        case 2: {
            string nombre;
            gestorPacientes.mostrarPacientes();
            cout << "Ingrese el nombre del paciente a eliminar: ";
            cin >> nombre;
            gestorPacientes.eliminarPaciente(nombre);
            break;
        }
        case 3:
            gestorPacientes.mostrarPacientes();  // Usa el operador <<
            break;
        case 4:
            gestorPacientes.ordenarPacientesPorEdad();  // Usa el operador <
            cout << "Pacientes ordenados por edad.\n";
            gestorPacientes.mostrarPacientes();  // Mostrar la lista ordenada
            break;
        case 0:
            return;  // Volver al menú principal
        default:
            cout << "Opción no valida.\n";
    }
}
void gestionarMedicos(GestorMedicos& gestorMedicos, GestorPacientes& gestorPacientes) {
    int opcion;
    cout << "\n--- Gestion de Medicos ---\n";
    cout << "1. Agregar Medico\n";
    cout << "2. Eliminar Medico\n";
    cout << "3. Mostrar Medicos\n";
    cout << "4. Mostrar Datos de Paciente\n";  // Nueva opción
    cout << "0. Volver al menu principal\n";
    cout << "Seleccione una opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1: {
            // Código para agregar médico
            break;
        }
        case 2: {
            // Código para eliminar médico
            break;
        }
        case 3:
            gestorMedicos.mostrarMedicos();
            break;
        case 4: {
            // Mostrar los datos de un paciente
            string nombrePaciente, nombreMedico;
            cout << "Ingrese el nombre del paciente: ";
            cin >> nombrePaciente;
            cout << "Ingrese el nombre del medico: ";
            cin >> nombreMedico;

            Paciente* paciente = gestorPacientes.buscarPaciente(nombrePaciente);
            Medico* medico = gestorMedicos.buscarMedico(nombreMedico);

            if (paciente && medico) {
                medico->mostrarDatosPaciente(*paciente);
            } else {
                cout << "Paciente o médico no encontrado.\n";
            }
            break;
        }
        case 0:
            return;  // Volver al menú principal
        default:
            cout << "Opción no válida.\n";
    }
}
void gestionarConsultas(GestorConsultas& gestorConsultas, GestorPacientes& gestorPacientes, GestorMedicos& gestorMedicos) {
    int opcion;
    cout << "\n--- Gestion de Consultas ---\n";
    cout << "1. Agregar Consulta Urgente\n";
    cout << "2. Agregar Consulta Programada\n";
    cout << "3. Mostrar Consultas\n";
    cout << "0. Volver al menu principal\n";
    cout << "Seleccione una opcion: ";
    cin.ignore();
    cin >> opcion;

    switch (opcion) {
        case 1: {
            // Crear una consulta urgente
            string nombrePaciente, nombreMedico, fecha, diagnostico, tratamiento;
            int nivelUrgencia;
            cout << "Ingrese el nombre del paciente: ";
            cin.ignore();
            cin >> nombrePaciente;
            cout << "Ingrese el nombre del medico: ";
            cin.ignore();
            cin >> nombreMedico;
            cout << "Ingrese la fecha de la consulta (Eje: 07Oct2024): ";
            cin.ignore();
            cin >> fecha;
            cout << "Ingrese el diagnostico: ";
            cin.ignore();
            getline(cin, diagnostico);
            cout << "Ingrese el tratamiento: ";
            getline(cin, tratamiento);
            cout << "Ingrese el nivel de urgencia (1 = baja, 2 = media, 3 = alta): ";
            cin.ignore();
            cin >> nivelUrgencia;

            Paciente* paciente = gestorPacientes.buscarPaciente(nombrePaciente);
            Medico* medico = gestorMedicos.buscarMedico(nombreMedico);

            if (paciente && medico) {
                Consulta* consultaUrgente = new ConsultaUrgente(paciente, medico, fecha, diagnostico, tratamiento, nivelUrgencia);
                gestorConsultas.agregarConsulta(consultaUrgente);
                cout << "Consulta urgente agregada con éxito.\n";
            } else {
                cout << "Paciente o médico no encontrado.\n";
            }
            break;
        }
        case 2: {
            // Crear una consulta programada
            string nombrePaciente, nombreMedico, fecha, diagnostico, tratamiento, hora;
            cout << "Ingrese el nombre del paciente: ";
            cin.ignore();
            cin >> nombrePaciente;
            cout << "Ingrese el nombre del medico: ";
            cin.ignore();
            cin >> nombreMedico;
            cout << "Ingrese la fecha de la consulta (Eje: 07Oct2024): ";
            cin.ignore();
            cin >> fecha;
            cout << "Ingrese la hora de la consulta programada: ";
            cin.ignore();
            cin >> hora;
            cout << "Ingrese el diagnostico: ";
            cin.ignore();
            getline(cin, diagnostico);
            cout << "Ingrese el tratamiento: ";
            cin.ignore();
            getline(cin, tratamiento);

            Paciente* paciente = gestorPacientes.buscarPaciente(nombrePaciente);
            Medico* medico = gestorMedicos.buscarMedico(nombreMedico);

            if (paciente && medico) {
                Consulta* consultaProgramada = new ConsultaProgramada(paciente, medico, fecha, diagnostico, tratamiento, hora);
                gestorConsultas.agregarConsulta(consultaProgramada);
                cout << "Consulta programada agregada con éxito.\n";
            } else {
                cout << "Paciente o médico no encontrado.\n";
            }
            break;
        }
        case 3:
            gestorConsultas.mostrarConsultas();
            break;
        case 0:
            return;  // Volver al menú principal
        default:
            cout << "Opción no válida.\n";
    }
}
void gestionarRecetas(GestorRecetas& gestorRecetas, GestorPacientes& gestorPacientes, GestorMedicos& gestorMedicos) {
    int opcion;
    cout << "\n--- Gestion de Recetas ---\n";
    cout << "1. Generar Receta\n";
    cout << "2. Mostrar Recetas\n";
    cout << "0. Volver al menu principal\n";
    cout << "Seleccione una opcion: ";
    cin.ignore();
    cin >> opcion;

    switch (opcion) {
        case 1: {
            string nombrePaciente, nombreMedico, medicamentos, fecha;
            cout << "Ingrese el nombre del paciente: ";
            cin.ignore();
            cin >> nombrePaciente;
            cout << "Ingrese el nombre del medico: ";
            cin.ignore();
            cin >> nombreMedico;
            cout << "Ingrese los medicamentos recetados: ";
            cin.ignore();  // Ignorar nueva línea pendiente
            getline(cin, medicamentos);  // Permite ingresar varias palabras
            cout << "Ingrese la fecha de la receta (Eje: 07Oct2024): ";
            cin.ignore();
            cin >> fecha;

            Paciente* paciente = gestorPacientes.buscarPaciente(nombrePaciente);
            Medico* medico = gestorMedicos.buscarMedico(nombreMedico);

            if (paciente && medico) {
                Receta* nuevaReceta = new Receta(paciente, medico, medicamentos, fecha);
                gestorRecetas.agregarReceta(nuevaReceta);
                cout << "Receta generada con exito.\n";
            } else {
                cout << "Paciente o medico no encontrado.\n";
            }
            break;
        }
        case 2:
            gestorRecetas.mostrarRecetas();
            break;
        case 0:
            return;  // Volver al menú principal
        default:
            cout << "Opcion no valida.\n";
    }
}
void gestionarFacturas(GestorFacturas& gestorFacturas, GestorPacientes& gestorPacientes) {
    int opcion;
    cout << "\n--- Gestion de Facturas ---\n";
    cout << "1. Generar Factura\n";
    cout << "2. Mostrar Facturas\n";
    cout << "0. Volver al menu principal\n";
    cout << "Seleccione una opcion: ";
    cin.ignore();
    cin >> opcion;

    switch (opcion) {
        case 1: {
            string nombrePaciente, fecha;
            double monto;
            cout << "Ingrese el nombre del paciente: ";
            cin.ignore();
            cin >> nombrePaciente;
            cout << "Ingrese el monto de la factura: $";
            cin.ignore();
            cin >> monto;
            cout << "Ingrese la fecha de la factura (Eje:07Oct2024): ";
            cin.ignore();
            cin >> fecha;

            Paciente* paciente = gestorPacientes.buscarPaciente(nombrePaciente);

            if (paciente) {
                Factura* nuevaFactura = new Factura(paciente, monto, fecha);
                gestorFacturas.agregarFactura(nuevaFactura);
                cout << "Factura generada con exito.\n";
            } else {
                cout << "Paciente no encontrado.\n";
            }
            break;
        }
        case 2:
            gestorFacturas.mostrarFacturas();
            break;
        case 0:
            return;  // Volver al menú principal
        default:
            cout << "Opcion no valida.\n";
    }
}
void gestionarCitas(GestorCitas& gestorCitas, GestorPacientes& gestorPacientes, GestorMedicos& gestorMedicos) {
    int opcion;
    cout << "\n--- Gestion de Citas ---\n";
    cout << "1. Programar Cita\n";
    cout << "2. Confirmar Cita\n";
    cout << "3. Mostrar Citas\n";
    cout << "0. Volver al menu principal\n";
    cout << "Seleccione una opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1: {
            string nombrePaciente, nombreMedico, fecha;
            cout << "Ingrese el nombre del paciente: ";
            cin >> nombrePaciente;
            cout << "Ingrese el nombre del medico: ";
            cin >> nombreMedico;
            cout << "Ingrese la fecha de la cita: ";
            cin >> fecha;

            Paciente* paciente = gestorPacientes.buscarPaciente(nombrePaciente);
            Medico* medico = gestorMedicos.buscarMedico(nombreMedico);

            if (paciente && medico) {
                Cita* nuevaCita = new Cita(paciente, medico, fecha);
                gestorCitas.agregarCita(nuevaCita);
                cout << "Cita programada con exito.\n";
            } else {
                cout << "Paciente o medico no encontrado.\n";
            }
            break;
        }
        case 2: {
            string fecha;
            cout << "Ingrese la fecha de la cita a confirmar: ";
            cin >> fecha;
            gestorCitas.confirmarCita(fecha);
            break;
        }
        case 3:
            gestorCitas.mostrarCitas();
            break;
        case 0:
            return;  // Volver al menú principal
        default:
            cout << "Opción no valida.\n";
    }
}
