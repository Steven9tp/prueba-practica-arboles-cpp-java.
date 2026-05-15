#ifndef ARBOL_H
#define ARBOL_H
#include "Nodo.h"
#include <queue>

class ArbolBinario {
private:
    Nodo* raiz;
    Nodo* insertar(Nodo* nodo, Estudiante* est);
    Nodo* buscar(Nodo* nodo, string cedula);
    Nodo* eliminar(Nodo* nodo, string cedula);
    Nodo* minValorNodo(Nodo* nodo);
    void inorden(Nodo* nodo);
    void preorden(Nodo* nodo);
    void postorden(Nodo* nodo);
    int contar(Nodo* nodo);
    int altura(Nodo* nodo);
    void mayorNota(Nodo* nodo, Estudiante* &mayor);
    void menorNota(Nodo* nodo, Estudiante* &menor);
    void aprobados(Nodo* nodo);
    void reprobados(Nodo* nodo);
public:
    ArbolBinario();
    void insertarEstudiante(Estudiante* est);
    void buscarEstudiante(string cedula);
    void eliminarEstudiante(string cedula);
    void recorridoInorden();
    void recorridoPreorden();
    void recorridoPostorden();
    void recorridoPorNiveles();
    int contarNodos();
    int calcularAltura();
    void buscarNotaMayor();
    void buscarNotaMenor();
    void mostrarAprobados();
    void mostrarReprobados();
};
#endif