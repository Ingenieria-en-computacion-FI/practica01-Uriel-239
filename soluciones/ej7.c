
#include <stdio.h>
int main(){
/* Utilizaremos la formula de mapeo: direccion = base + (i * N + j) * tamaño(tipo)
 Sea N el número de columnas y S el tamaño del tipo de dato.
Dirección &m[0][3] = base + (0 * N + 3) * S = base + 3S
Dirección &m[1][0] = base + (1 * N + 0) * S = base + NS

 La dirección &m[1][0] es mayor que &m[0][3] siempre que el número de columnas (N) sea mayor a 3. 
 */
    return 0;
}
