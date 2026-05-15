#include "Estudiante.h"
#include <iostream>
using namespace std;

Estudiante::Estudiante(string ced, string ape, string nom, float nota, string carr, int niv) {
    cedula = ced;
    apellidos = ape;
    nombres = nom;
    notaFinal = nota;
    carrera = carr;
    nivel = niv;
}

void Estudiante::mostrar() {
    cout << cedula << " | " << apellidos << " " << nombres << " | Nota: " << notaFinal << " | " << carrera << " | Nivel: " << nivel << endl;
}
