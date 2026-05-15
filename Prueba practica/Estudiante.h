#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <string>
using namespace std;

class Estudiante {
public:
    string cedula, apellidos, nombres, carrera;
    int nivel;
    float notaFinal;

    Estudiante(string ced, string ape, string nom, float nota, string carr, int niv);
    void mostrar();
};
#endif