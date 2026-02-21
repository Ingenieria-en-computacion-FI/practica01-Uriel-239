#include <stdio.h>

int main() {
    int a[6];
    for(int i=0; i<6; i++) {
        printf("&a[%d] = %p\n", i, &a[i]);
    }
    return 0;
}

/*II. Diferencia de direcciones: Cada elemento 'int' ocupa 4 bytes. Como la memoria se sigue, 
la diferencia entre elementos sucesivos (&a[i+1] - &a[i]) es siempre de 4 bytes en el sistema hexadecimal.

III. Fórmula de direccion: Para calcular la dirección de a[i] usamos: [ base + (i * 4) ]
donde 'base' es la dirección del primer elemento (&a[0]).
 */
