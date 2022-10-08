/* programa hecho por jovani emmanuel sanchez de jesus */
/* ejercio 2.4 */
#include <stdio.h> /* inicio del programa */
float costo_hora,cobro,horas; /* definicion de variables */
/* se definen las variables como entero */
int main()
{
    printf("ingresa el numero de horas, las fracciones de hora se toman como una hora entera: ");/* letrero para pedir horas */
    scanf("%f",&horas);/* ingresa las horas */
    fflush(stdin);/* resetear el bufer */
    printf("ingresa el costo por hora: ");/* letrero para pedir el costo por hora */
    scanf("%f",&costo_hora);/* ingresa el costo por hora */
    fflush(stdin);/* resetear el buffer */
    cobro = costo_hora*horas; /* hacer el cobro  */
    printf("el costo del cobro por estacionamiento es de :[%f] ",cobro); /* escribir el cobro total  */
    return 0;
}/* fin del programa */
