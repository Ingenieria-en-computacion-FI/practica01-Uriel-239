
#include <stdio.h>
int main(){
    /*
Salida:
&a[0] = 1000
&a[1] = 1008
&a[2] = 1016

I. Como se observa, la dirección aumenta en intervalos de 8 en 8; por lo tanto, es posible determinar con seguridad que el tamaño del dato es de 8 bytes.
II. El tipo de dato correspondiente sería double, ya que es uno de los pocos tipos que utiliza una extensión de 8 bytes.
III. La fórmula específica para este caso sería: 1000 +  n * 8.*/
    return 0;
}
