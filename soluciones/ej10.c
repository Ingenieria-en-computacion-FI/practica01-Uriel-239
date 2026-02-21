
#include <stdio.h>
int main(){
    /*Explica causa
Puede fallar porque el arreglo es muy grande. Si está dentro de una función, ocupa mucho espacio y puede llenarse la memoria del programa.

Indica dónde se almacena
Si está dentro de una función, se guarda en el stack.
Si está fuera (global), se guarda en otra parte más grande de memoria.

Propone solución sin memoria dinámica
Poner el arreglo fuera de la función principal o usar static para que no se guarde en el stack y no cause error.
*/
    return 0;
}
