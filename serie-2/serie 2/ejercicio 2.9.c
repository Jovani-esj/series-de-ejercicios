/* programa hecho por jovani emmanuel sanchez de jesus */
/* ejercicio 2.9 */
#include <stdio.h> /* inicio del programa */
float tiempo_llamada,costo_minuto,costo_llamada; /* definicion de variables */
int main()
{
    printf("ingresa el numero de minutos de duracion de la llamada : ");/* letrero para pedir duracion de la lamada*/
    scanf("%f",&tiempo_llamada);/* ingresa los minutos de la llamaada*/
    fflush(stdin);/* resetear el bufer */
    printf("ingresa el costo por minuto ");/* letrero para pedir el costo por minuto*/
    scanf("%f",&costo_minuto);/* ingresa el costo por minuto */
    fflush(stdin);/* resetear el buffer */
    costo_llamada = tiempo_llamada*costo_minuto; /* hacer el costo por llamada */
    printf("el costo de la llamada es de:[%.2f] ",costo_llamada); /* escribir el costo de llamada */
    return 0;
}/* fin del programa */
