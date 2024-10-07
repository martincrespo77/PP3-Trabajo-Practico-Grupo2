
#ifndef PP3CCB_MENU_GESTION_H
#define PP3CCB_MENU_GESTION_H

#include "GestorPacientes.h++"
#include "GestorMedicos.h++"
#include "GestorConsultas.h++"
#include "GestorCitas.h++"
#include "GestorRecetas.h++"
#include "GestorFacturas.h++"

// Declaración de las funciones del menú y de gestión
void mostrarMenu();
void gestionarPacientes(GestorPacientes& gestorPacientes);
void gestionarMedicos(GestorMedicos& gestorMedicos, GestorPacientes& gestorPacientes);
void gestionarConsultas(GestorConsultas& gestorConsultas, GestorPacientes& gestorPacientes, GestorMedicos& gestorMedicos);
void gestionarRecetas(GestorRecetas& gestorRecetas, GestorPacientes& gestorPacientes, GestorMedicos& gestorMedicos);
void gestionarFacturas(GestorFacturas& gestorFacturas, GestorPacientes& gestorPacientes);
void gestionarCitas(GestorCitas& gestorCitas, GestorPacientes& gestorPacientes, GestorMedicos& gestorMedicos);

// Puedes añadir más funciones si es necesario

#endif // MENU_GESTION_H
