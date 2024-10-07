#include <iostream>
#include <algorithm>
#include "Menu_Gestion.h++"


using namespace std;


int main() {
    GestorPacientes gestorPacientes;
    GestorMedicos gestorMedicos;
    GestorConsultas gestorConsultas;
    GestorCitas gestorCitas;
    GestorFacturas gestorFacturas;
    GestorRecetas gestorRecetas;

    int opcion;
    do {
        mostrarMenu();
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
            case 1:
                gestionarPacientes(gestorPacientes);
                break;
            case 2:
                gestionarMedicos(gestorMedicos, gestorPacientes);  // Se pasa gestorPacientes aquí
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

    return 0;
}

