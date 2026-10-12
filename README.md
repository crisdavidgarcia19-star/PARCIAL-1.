# Parcial 1 — Estructuras de Datos 

## Descripción
Programa de consola para mostrar puntajes de un competidor y ordenarlos con Bubble Sort, Selection Sort o Insertion Sort, en orden ascendente o descendente. El módulo de datos usa un apuntador y memoria dinámica (`malloc`/`free`).

## Archivos
- `datos.h`: estructura y prototipos del módulo de datos.
- `datos.c`: registro, visualización y liberación de memoria.
- `ordenamiento.h`: prototipos de los tres algoritmos.
- `ordenamiento.c`: implementación de los algoritmos.
- `main.c`: menú interactivo.
- `evidencias/`: evidencias de prueba y espacio para capturas reales.

## Compilar con GCC
Ejecutar estos comandos en la terminal, dentro de esta carpeta:

```bash
gcc -std=c11 -Wall -Wextra -pedantic -c datos.c -o datos.o
gcc -std=c11 -Wall -Wextra -pedantic -c ordenamiento.c -o ordenamiento.o
gcc -std=c11 -Wall -Wextra -pedantic -c main.c -o main.o
gcc datos.o ordenamiento.o main.o -o programa.exe
```

Ejecutar en Windows:
```powershell
.\programa.exe
```

En Linux/macOS, enlazar con `-o programa` y ejecutar `./programa`.



