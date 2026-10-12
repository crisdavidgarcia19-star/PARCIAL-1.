#include "ordenamiento.h"

static int intercambiar(int a, int b, int ascendente) {
    return ascendente ? (a > b) : (a < b);
}

void bubbleSort(int *datos, int n, int ascendente) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (intercambiar(datos[j], datos[j + 1],
                             ascendente)) {
                int temporal = datos[j];
                datos[j] = datos[j + 1];
                datos[j + 1] = temporal;
            }
        }
    }
}

void selectionSort(int *datos, int n, int ascendente) {
    for (int i = 0; i < n - 1; i++) {
        int elegido = i;

        for (int j = i + 1; j < n; j++) {
            if (intercambiar(datos[elegido], datos[j],
                             ascendente)) {
                elegido = j;
            }
        }

        if (elegido != i) {
            int temporal = datos[i];
            datos[i] = datos[elegido];
            datos[elegido] = temporal;
        }
    }
}

void insertionSort(int *datos, int n, int ascendente) {
    for (int i = 1; i < n; i++) {
        int clave = datos[i];
        int j = i - 1;

        while (j >= 0 &&
               intercambiar(datos[j], clave, ascendente)) {
            datos[j + 1] = datos[j];
            j--;
        }

        datos[j + 1] = clave;
    }
}