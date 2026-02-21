
#include <stdio.h>
int main(){
    /*  I. Comparación de direcciones: La dirección mayor es &a[5] porque se ubica adelante en memoria, usando la fórmula: 
    direccion = base + (i * tamaño(en este caso int)) 
    &a[4] = base + (4 * 4) = base + 16    &a[5] = base + (5 * 4) = base + 20
 Al ser la base constante, &a[5] es mayor por una diferencia de 4 bytes.
 */
    return 0;
}
