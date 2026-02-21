#include <stdio.h>

int main() {
    int a[5];

    printf("&a[-1] = %p\n", &a[-1]);
    printf("&a[5]  = %p\n", &a[5]);

    return 0;
}

/* * 
1. ¿POR QUÉ COMPILA?: C no verifica los límites del arreglo en tiempo de compilación. Solo traduce 
 el índice a una dirección de memoria matemática y ejecuta la instrucción.
 
2. ¿POR QUÉ ES PELIGROSO?: Accedes a memoria que no esta reservada. Esto puede causar error de otros datos, 
 comportamientos raros o errores de segmentación.
 
3. ¿QUÉ REVELA SOBRE LA MEMORIA?: Confirma que la memoria es lineal y contigua. Revela que C no guarda el 
 tamaño del arreglo internamente; el control depende totalmente del programador.
 */
