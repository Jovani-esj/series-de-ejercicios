/* programa hecho por jovani emmanuel sanchez de jesus */
/* ejercicio 2.8 */
#include <stdio.h> /* inicio del programa */
float velocidad,kilometros_recorridos,tiempo_en_llegar; /* definicion de variables */
int main()
{
    printf("ingresa el numero de kilometros recorridos: ");/* letrero para pedir kiilometros recorridos*/
    scanf("%f",&kilometros_recorridos);/* ingresa los kilometros a recorrer o recorridos*/
    fflush(stdin);/* resetear el bufer */
    printf("ingresa la velocidad en km/h: ");/* letrero para pedir la velocidad*/
    scanf("%f",&velocidad);/* ingresa la velocidad en kilometros por hora */
    fflush(stdin);/* resetear el buffer */
    tiempo_en_llegar = kilometros_recorridos/velocidad; /* hacer el tiempo de llegada  */
    printf("el tiempo que se tarda en llegar en horas es de :[%.2f] ",tiempo_en_llegar); /* escribir el tiempo de llegada  */
    return 0;
}/* fin del programa */
