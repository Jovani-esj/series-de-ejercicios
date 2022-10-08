/* programa hecho por jovani emmanuel sanchez de jesus */
/* ejercicio 2.5 */
#include <stdio.h> /* inicio del programa */
float costo_metro,cobro,metros; /* definicion de variables */
int main()
{
    printf("ingresa el numero de metros cuadrados: ");/* letrero para pedir metros cuadrados*/
    scanf("%f",&metros);/* ingresa los metros */
    fflush(stdin);/* resetear el bufer */
    printf("ingresa el costo por metro cuadrado: ");/* letrero para pedir el costo por metro */
    scanf("%f",&costo_metro);/* ingresa el costo por hora */
    fflush(stdin);/* resetear el buffer */
    cobro = costo_metro*metros; /* hacer el cobro  */
    printf("el costo por metro cuadrado  es de :[%f] ",cobro); /* escribir el cobro total  */
    return 0;
}/* fin del programa */
