#include "Nodo.h"

Nodo::Nodo(Estudiante* est) {
    estudiante = est;
    izquierdo = nullptr;
    derecho = nullptr;
}