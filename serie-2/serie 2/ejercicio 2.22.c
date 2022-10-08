/* programa hecho por jovani emmanuel sanchez de jesus */
/* programa 2.22 */
#include<stdio.h>
float minutos, costo_minuto,costo_llamada;/* definicion de variables */
int main()
{
    printf("ingresa el numero de minutos que duro la llamada: ");/* letrero pedir minutos */
    scanf("%f",&minutos);/* ingresa los minutos */
    fflush(stdin);/* resetear buffer */
    printf("ingresa el costo por minuto: ");/* letrero pedir costo minuto */
    scanf("%f",&costo_minuto);/* ingresa costo minuto */
    fflush(stdin);/* resetear buffer */
    costo_llamada = minutos*costo_minuto;/* hacer costo llamada */
    printf("el costo de la llamada es de: %f",costo_llamada);/* escribir el costo por llamada */
    printf("pesos");
    return 0;

}/* fin del programa */
