/* programa hecho por jovani emmanuel sanchez de jesus */
/* ejercicio 2.10 */
#include <stdio.h> /* inicio del programa */
float metros_cubicos,costo_metro,costo_agua; /* definicion de variables */
int main()
{
    printf("ingresa el numero de metros cubicos consumidos: ");/* letrero para pedir metros cubicos consumidos*/
    scanf("%f",&metros_cubicos);/* ingresa los metros cubicos */
    fflush(stdin);/* resetear el bufer */
    printf("ingresa el costo por metro cubico ");/* letrero para pedir el costo por metro cubico*/
    scanf("%f",&costo_metro);/* ingresa el costo por minuto */
    fflush(stdin);/* resetear el buffer */
    costo_agua = metros_cubicos*costo_metro; /* hacer el costo por los metros */
    printf("el costo de la llamada es de:[%.2f] ",costo_agua); /* escribir el costo de llamada */
    return 0;
}/* fin del programa */
