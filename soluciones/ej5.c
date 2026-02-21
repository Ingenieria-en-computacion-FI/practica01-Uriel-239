
#include <stdio.h>
int main(){
    /* 
 El estudiante dice que &a[0] = 1000, entonces &a[10] = 1010. por lo que aplicamos una formula. 
 * &a[i] = base + (i * tama_tipo)
 * 1010 = 1000 + (10 * tama_tipo)
despejamos 
 1010 - 1000 = 10 * tam_tipo
  10 = 10 * tam_tipo
 tam_tipo = 1 byte
el estudiante esta mal pues para tipos de datos en C como 'int' o 'double'. Solo es seria si el tipo de dato ocupa exactamente 1 byte.
 */
    return 0;
}
