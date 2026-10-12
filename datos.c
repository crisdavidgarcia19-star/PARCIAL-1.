#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "datos.h"

void inicializarCompetidor(
    Competidor *c, int id, const char *nombre,
    const int *puntajes, int cantidad
) {
    if (c == NULL || cantidad < 0) return;

    c->id = id;

    strncpy(c->nombre, nombre, MAX_NOMBRE - 1);
    c->nombre[MAX_NOMBRE - 1] = '\0';

    c->cantidad = cantidad;
    c->puntajes = NULL;

    if (cantidad > 0) {
        c->puntajes = malloc(cantidad * sizeof(int));

        if (c->puntajes == NULL) {
            printf("Error al reservar memoria.\n");
            c->cantidad = 0;
            return;
        }

        for (int i = 0; i < cantidad; i++) {
            c->puntajes[i] = puntajes[i];
        }
    }
}

void liberarCompetidor(Competidor *c) {
    if (c != NULL) {
        free(c->puntajes);
        c->puntajes = NULL;
        c->cantidad = 0;
    }
}

void mostrarPuntajes(const Competidor *c) {
    if (c == NULL) return;

    printf("Competidor: %s\n", c->nombre);
    printf("ID: %d\n", c->id);
    printf("Puntajes: ");

    for (int i = 0; i < c->cantidad; i++) {
        printf("%d ", c->puntajes[i]);
    }

    printf("\n");
}