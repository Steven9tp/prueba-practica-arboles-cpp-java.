#include "ArbolBinario.h"
#include <iostream>
#include <queue>
using namespace std;

ArbolBinario::ArbolBinario() { raiz = nullptr; }

Nodo* ArbolBinario::insertar(Nodo* nodo, Estudiante* est) {
    if (nodo == nullptr) return new Nodo(est);
    if (est->cedula < nodo->estudiante->cedula)
        nodo->izquierdo = insertar(nodo->izquierdo, est);
    else
        nodo->derecho = insertar(nodo->derecho, est);
    return nodo;
}

void ArbolBinario::insertarEstudiante(Estudiante* est) {
    raiz = insertar(raiz, est);
}

Nodo* ArbolBinario::buscar(Nodo* nodo, string cedula) {
    if (nodo == nullptr || nodo->estudiante->cedula == cedula) return nodo;
    if (cedula < nodo->estudiante->cedula) return buscar(nodo->izquierdo, cedula);
    return buscar(nodo->derecho, cedula);
}

void ArbolBinario::buscarEstudiante(string cedula) {
    Nodo* res = buscar(raiz, cedula);
    if (res) res->estudiante->mostrar();
    else cout << "Estudiante no encontrado\n";
}

Nodo* ArbolBinario::minValorNodo(Nodo* nodo) {
    while (nodo && nodo->izquierdo) nodo = nodo->izquierdo;
    return nodo;
}

Nodo* ArbolBinario::eliminar(Nodo* nodo, string cedula) {
    if (nodo == nullptr) return nullptr;
    if (cedula < nodo->estudiante->cedula)
        nodo->izquierdo = eliminar(nodo->izquierdo, cedula);
    else if (cedula > nodo->estudiante->cedula)
        nodo->derecho = eliminar(nodo->derecho, cedula);
    else {
        if (nodo->izquierdo == nullptr) {
            Nodo* temp = nodo->derecho;
            delete nodo;
            return temp;
        } else if (nodo->derecho == nullptr) {
            Nodo* temp = nodo->izquierdo;
            delete nodo;
            return temp;
        }
        Nodo* temp = minValorNodo(nodo->derecho);
        nodo->estudiante = temp->estudiante;
        nodo->derecho = eliminar(nodo->derecho, temp->estudiante->cedula);
    }
    return nodo;
}

void ArbolBinario::eliminarEstudiante(string cedula) {
    raiz = eliminar(raiz, cedula);
}

void ArbolBinario::inorden(Nodo* nodo) {
    if (nodo) {
        inorden(nodo->izquierdo);
        nodo->estudiante->mostrar();
        inorden(nodo->derecho);
    }
}

void ArbolBinario::recorridoInorden() { inorden(raiz); }

void ArbolBinario::preorden(Nodo* nodo) {
    if (nodo) {
        nodo->estudiante->mostrar();
        preorden(nodo->izquierdo);
        preorden(nodo->derecho);
    }
}

void ArbolBinario::recorridoPreorden() { preorden(raiz); }

void ArbolBinario::postorden(Nodo* nodo) {
    if (nodo) {
        postorden(nodo->izquierdo);
        postorden(nodo->derecho);
        nodo->estudiante->mostrar();
    }
}

void ArbolBinario::recorridoPostorden() { postorden(raiz); }

void ArbolBinario::recorridoPorNiveles() {
    if (!raiz) return;
    queue<Nodo*> cola;
    cola.push(raiz);
    while (!cola.empty()) {
        Nodo* actual = cola.front();
        cola.pop();
        actual->estudiante->mostrar();
        if (actual->izquierdo) cola.push(actual->izquierdo);
        if (actual->derecho) cola.push(actual->derecho);
    }
}

int ArbolBinario::contar(Nodo* nodo) {
    if (!nodo) return 0;
    return 1 + contar(nodo->izquierdo) + contar(nodo->derecho);
}

int ArbolBinario::contarNodos() { return contar(raiz); }

int ArbolBinario::altura(Nodo* nodo) {
    if (!nodo) return 0;
    return 1 + max(altura(nodo->izquierdo), altura(nodo->derecho));
}

int ArbolBinario::calcularAltura() { return altura(raiz); }

void ArbolBinario::mayorNota(Nodo* nodo, Estudiante* &mayor) {
    if (nodo) {
        if (!mayor || nodo->estudiante->notaFinal > mayor->notaFinal) mayor = nodo->estudiante;
        mayorNota(nodo->izquierdo, mayor);
        mayorNota(nodo->derecho, mayor);
    }
}

void ArbolBinario::buscarNotaMayor() {
    Estudiante* mayor = nullptr;
    mayorNota(raiz, mayor);
    if (mayor) mayor->mostrar();
}

void ArbolBinario::menorNota(Nodo* nodo, Estudiante* &menor) {
    if (nodo) {
        if (!menor || nodo->estudiante->notaFinal < menor->notaFinal) menor = nodo->estudiante;
        menorNota(nodo->izquierdo, menor);
        menorNota(nodo->derecho, menor);
    }
}

void ArbolBinario::buscarNotaMenor() {
    Estudiante* menor = nullptr;
    menorNota(raiz, menor);
    if (menor) menor->mostrar();
}

void ArbolBinario::aprobados(Nodo* nodo) {
    if (nodo) {
        if (nodo->estudiante->notaFinal >= 7) nodo->estudiante->mostrar();
        aprobados(nodo->izquierdo);
        aprobados(nodo->derecho);
    }
}

void ArbolBinario::mostrarAprobados() { aprobados(raiz); }

void ArbolBinario::reprobados(Nodo* nodo) {
    if (nodo) {
        if (nodo->estudiante->notaFinal < 7) nodo->estudiante->mostrar();
        reprobados(nodo->izquierdo);
        reprobados(nodo->derecho);
    }
}

void ArbolBinario::mostrarReprobados() { reprobados(raiz); }