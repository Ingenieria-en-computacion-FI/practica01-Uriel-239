#include <stdio.h>
int main() {
    int a[3];
    int b[3];
    int c[3];

    printf(" Direcciones del arreglo a\n");
    for(int i=0; i<3; i++) {
        printf("&a[%d] = %p\n", i, &a[i]);
    }

    printf(" Direcciones del arreglo b\n");
    for(int i=0; i<3; i++) {
        printf("&b[%d] = %p\n", i, &b[i]);
    }

    printf("Direcciones del arreglo c\n");
    for(int i=0; i<3; i++) {
        printf("&c[%d] = %p\n", i, &c[i]);
    }

    return 0;
}

/*  2. ¿ESTÁN JUNTOS EN MEMORIA?:
SI son contiguos. Se observa que donde termina un arreglo, empieza el siguiente sin espacios. 

3. ¿DE QUÉ DEPENDE?:
Depende de la gestión del 'Stack', que asigna bloques seguidos y suele crecer hacia direcciones menores. Por ello, el primer 
arreglo declarado que en este caso es a tiene la dirección más alta.
 */
