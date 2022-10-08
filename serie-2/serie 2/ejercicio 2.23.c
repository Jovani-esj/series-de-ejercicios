/* programa hecho por jovani emmanuel sanchez de jesus */
#include<stdio.h> /* cabecera */
/* ejercicio 2.23 */
float tiempo_dia,costo_dia,total_cobro;/* definicion de variables */
int main()/* funcion main e inicio */
{
    printf("ingresa el numero de dias a estar en el hotel: ");/* letrero pedir numero de dias */
    scanf("%f",&tiempo_dia);/* ingresar tiempo */
    fflush(stdin);/* resetear buffer */
    printf("ingresa el costo por dia: ");/* letrero pedir costo por dia */
    scanf("%f",&costo_dia);/* resetear buffer */
    total_cobro = tiempo_dia*costo_dia;/* hacer el total */
    printf("el cobro total es de: %.2f",total_cobro);/* escribir el cobro */
    printf("pesos");
    return 0;

}/* fin del programa */