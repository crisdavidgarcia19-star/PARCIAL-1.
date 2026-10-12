#include <stdlib.h>
#include "datos.h"
#include "ordenamiento.h"

/* Funcion main para ejecutar los métodos de ordenamientos base #CP */
/* Funcion main para ejecutar los métodos de ordenamientos base #NoBorrar. */
/* Participante: escribe aquí tu nombre completo. */

int main(void) {
    const int puntajes[] = {85, 42, 96, 57, 73};
    Competidor c;
    int metodo, orden;

    inicializarCompetidor(
        &c, 1001, "Competidor Demo", puntajes, 5
    );

    if (c.puntajes == NULL) {
        printf("Error al inicializar los puntajes.\n");
        liberarCompetidor(&c);
        return EXIT_FAILURE;
    }

    printf("=== SISTEMA DE CLASIFICACION ===\n");
    mostrarPuntajes(&c);

    printf("\n1. Bubble Sort\n");
    printf("2. Selection Sort\n");
    printf("3. Insertion Sort\n");
    printf("Seleccione el método: ");

    if (scanf("%d", &metodo) != 1 ||
        metodo < 1 || metodo > 3) {
        printf("Opción no válida.\n");
        liberarCompetidor(&c);
        return EXIT_FAILURE;
    }

    printf("1. Menor a mayor\n");
    printf("2. Mayor a menor\n");
    printf("Seleccione el orden: ");

    if (scanf("%d", &orden) != 1 ||
        (orden != 1 && orden != 2)) {
        printf("Orden no válido.\n");
        liberarCompetidor(&c);
        return EXIT_FAILURE;
    }

    printf("\nAntes: ");
    for (int i = 0; i < c.cantidad; i++) {
        printf("%d ", c.puntajes[i]);
    }

    switch (metodo) {
        case 1:
            bubbleSort(c.puntajes, c.cantidad, orden == 1);
            break;
        case 2:
            selectionSort(c.puntajes, c.cantidad, orden == 1);
            break;
        case 3:
            insertionSort(c.puntajes, c.cantidad, orden == 1);
            break;
    }

    printf("\nDespués: ");
    for (int i = 0; i < c.cantidad; i++) {
        printf("%d ", c.puntajes[i]);
    }

    printf("\n");
    liberarCompetidor(&c);

    return EXIT_SUCCESS;
}