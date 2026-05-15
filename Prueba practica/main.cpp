#include "ArbolBinario.h"
#include <iostream>
using namespace std;

int main() {
    ArbolBinario arbol;
    int opcion;
    string ced, ape, nom, carr;
    float nota;
    int nivel;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Insertar estudiante\n2. Buscar por cedula\n3. Eliminar\n4. Inorden\n5. Preorden\n6. Postorden\n7. BFS\n8. Contar\n9. Altura\n10. Mayor nota\n11. Menor nota\n12. Aprobados\n13. Reprobados\n14. Salir\nOpcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Cedula: "; cin >> ced;
                cout << "Apellidos: "; cin >> ape;
                cout << "Nombres: "; cin >> nom;
                cout << "Nota final: "; cin >> nota;
                cout << "Carrera: "; cin >> carr;
                cout << "Nivel: "; cin >> nivel;
                arbol.insertarEstudiante(new Estudiante(ced, ape, nom, nota, carr, nivel));
                break;
            case 2:
                cout << "Cedula: "; cin >> ced;
                arbol.buscarEstudiante(ced);
                break;
            case 3:
                cout << "Cedula: "; cin >> ced;
                arbol.eliminarEstudiante(ced);
                break;
            case 4: arbol.recorridoInorden(); break;
            case 5: arbol.recorridoPreorden(); break;
            case 6: arbol.recorridoPostorden(); break;
            case 7: arbol.recorridoPorNiveles(); break;
            case 8: cout << "Total: " << arbol.contarNodos() << endl; break;
            case 9: cout << "Altura: " << arbol.calcularAltura() << endl; break;
            case 10: arbol.buscarNotaMayor(); break;
            case 11: arbol.buscarNotaMenor(); break;
            case 12: arbol.mostrarAprobados(); break;
            case 13: arbol.mostrarReprobados(); break;
            case 14: cout << "Saliendo...\n"; break;
            default: cout << "Opcion invalida\n";
        }
    } while (opcion != 14);
    return 0;
}