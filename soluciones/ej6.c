#include <stdio.h>

int main() {
    int m[2][4];

    printf("Direcciones de los elementos de la matriz m[2][4]:\n\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            printf("&m[%d][%d] = %p\n", i, j, (void*)&m[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/* * Se usan ciclos anidados para recorrer una matriz de enteros m[2][4] e imprimir las direcciones de memoria de todos los elementos dados. 
Las direcciones aumentan de 4 en 4 bytes llenando los elementos de una fila antes de pasar a la siguiente.
 El almacenamiento se realiza por filas. 
La fórmula para calcular la dirección de m[i][j] es:  m[0][0] + ((i * 4) + j) * 4
     */
