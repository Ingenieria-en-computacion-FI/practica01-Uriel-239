
#include <stdio.h>
int main(){
    /* base = 2000, tamño(int) = 4, dirección de m[1][2] = 2024

 usamos la fórmula: Direccion = base + (i * N + j) * tamaño(tipo)
 2024 = 2000 + (1 * N + 2) * 4 
 24 = (N + 2) * 4
 6 = N + 2
 N = 4 columnas

Con 2 filas (M=2), con el índice 1 existe:
Tamaño = M * N * tamaño(int) 
Tamaño = 2 * 4 * 4 = 32 bytes
 */
    return 0;
}
