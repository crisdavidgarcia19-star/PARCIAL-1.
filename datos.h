tos.h
Este archivo define cómo se guarda la información de cada competidor.
Abre datos.h y copia este código:
#ifndef DATOS_H
#define DATOS_H

#define MAX_NOMBRE 50

typedef struct {
    int id;
    char nombre[MAX_NOMBRE];
    int *puntajes;
    int cantidad;
} Competidor;

void inicializarCompetidor(
    Competidor *c, int id, const char *nombre,
    const int *puntajes, int cantidad
);

void liberarCompetidor(Competidor *c);
void mostrarPuntajes(const Competidor *c);

#endif