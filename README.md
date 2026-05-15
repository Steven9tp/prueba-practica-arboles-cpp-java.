# Prueba Práctica: Árboles en C++

**Asignatura:** Estructura de Datos  
**Tema:** Árboles binarios, recorridos y aplicación práctica  
**Lenguaje:** C++  

## Descripción del Proyecto

Sistema académico que gestiona estudiantes mediante un **Árbol Binario de Búsqueda (ABB)**.  
Cada estudiante contiene: cédula, apellidos, nombres, nota final, carrera y nivel.

## Funcionalidades Implementadas

| # | Función | Descripción |
|---|---------|-------------|
| 1 | Insertar estudiante | Agrega un nuevo estudiante al árbol |
| 2 | Buscar estudiante | Busca por cédula |
| 3 | Eliminar estudiante | Elimina un estudiante del árbol |
| 4 | Recorrido Inorden | Muestra Izquierdo → Raíz → Derecho |
| 5 | Recorrido Preorden | Muestra Raíz → Izquierdo → Derecho |
| 6 | Recorrido Postorden | Muestra Izquierdo → Derecho → Raíz |
| 7 | Recorrido por niveles (BFS) | Recorrido horizontal usando cola |
| 8 | Contar estudiantes | Total de nodos en el árbol |
| 9 | Calcular altura | Altura máxima del árbol |
| 10 | Mayor nota | Estudiante con nota más alta |
| 11 | Menor nota | Estudiante con nota más baja |
| 12 | Aprobados | Estudiantes con nota ≥ 7 |
| 13 | Reprobados | Estudiantes con nota < 7 |
| 14 | Salir | Finaliza el programa |

## Estructura del Código
prueba-practica-arboles-cpp-java/
└── main.cpp # Archivo único con todo el código

text

## Requisitos Técnicos Cumplidos

-  Árbol binario de búsqueda (ABB)
-  Recursividad en recorridos
-  Punteros en C++
-  Cola (queue) para BFS
-  Clases y objetos (POO)
-  Código modular
-  Validación de datos (cédulas duplicadas)
-  Comentarios explicativos

## Compilación y Ejecución

### Compilar:
```
g++ -std=c++11 -o sistema main.cpp
````

* Ejecutar (Windows):
````
sistema.exe
````

* Ejecutar (Linux/Mac):
````
./sistema
````

* Ejemplo de Uso
````
=== INSERTAR ESTUDIANTE ===
Cédula: 123456789
Apellidos: Perez
Nombres: Juan
Nota final: 8.5
Carrera: Sistemas
Nivel: 3
✓ Estudiante insertado correctamente!

=== BUSCAR ESTUDIANTE ===
Ingrese cédula: 123456789
✓ Estudiante encontrado:
123456789 | Perez Juan | Nota: 8.5 | Sistemas | Nivel: 3
````

Evidencias
Captura de ejecución del menú principal:

### Captura 1: Menú principal
Ejecuta el programa y toma captura del menú mostrado.

### Captura 2: Insertar estudiantes
Inserta al menos 5 estudiantes:
Cédula: 001 | Nombre: Ana | Nota: 9.0
Cédula: 002 | Nombre: Luis | Nota: 5.0
Cédula: 003 | Nombre: Carla | Nota: 7.5
Cédula: 004 | Nombre: Pedro | Nota: 4.0
Cédula: 005 | Nombre: Sofia | Nota: 8.0

text

### Captura 3: Recorrido Inorden
Selecciona opción 4 y captura el resultado.

### Captura 4: Recorrido BFS (por niveles)
Selecciona opción 7 y captura el resultado.

### Captura 5: Mostrar aprobados y reprobados
Selecciona opción 12 y 13, captura ambos resultados.


##  **Estructura final del repositorio**
````
prueba-practica-arboles-cpp-java/
│
├── main.cpp # Código fuente completo
├── README.md # Documentación del proyecto
│
└── capturas/ # Carpeta con evidencias
├── menu.png
├── insertar.png
├── inorden.png
├── bfs.png
└── aprobados.png
````
