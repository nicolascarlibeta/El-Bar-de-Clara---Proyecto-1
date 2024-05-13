
#ifndef PROYECTO1_H
#define PROYECTO1_H

#include <stdlib.h>
#include <stdbool.h>

//DECLARACIÓN DE FUNCIONES

void VerLista(Lista PRODUCTOS);
void AgregarProductos();
void MostrarProductos();
void ModificarProductos();
void AgregarDatos(int *dia, int *mes, int *anio);
void ModificarDatos(Lista PRODUCTOS);
int TotalSub(int dia, int mes, int anio, Lista PRODUCTOS, int i);
void Total(int d, int m, int a, int i, Lista PRODUCTOS);
int PromedioSub(int dia, int mes, int anio, Lista PRODUCTOS, int i);
void Promedio(int d, int m, int a, int i, Lista PRODUCTOS);
int ProductoMomVSub(int i);
void ProductoMomV();

//MENU
void limpiar_pantalla();
void menuPrincipal();
void MenuOpciones(int opcion);
























#endif


