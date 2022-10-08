/* programa hecho por jovani */
#include <stdio.h> /* zona de cavecera con funciones de entrada salida */

int nc; /* definicion de entero */
float cc, tot; /* definicion de real */

int main()
{
printf("/n ingresa el numero de cita: "); /* letrero para leer numero de citas */
scanf("%i",&nc);
fflush(stdin);
if (nc<=3)
{
    cc = 200;
    tot = nc*cc;
}else{
    if (nc <=5){
        cc = 150;
        tot =(nc-3) * cc + 600;
    }else{
        if (nc <=8)
        {
            cc =100;
            tot=(nc-5*cc+900);
        }else{
            cc=50;
            tot = (nc-8)*cc + 1200;
        }
    }
}
printf("/n el costo por cita es : [%.2f] ",cc); /* se imprime el resultado del costo por cita */
printf("/n el costo por tratamiento es : [%.2f] ",tot); /* se imprime el costo por tratamiento */
return 0; /* fin del programa */
}
