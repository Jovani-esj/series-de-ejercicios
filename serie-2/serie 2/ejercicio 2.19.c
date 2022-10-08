/* programa hecho por jovani emmanuel sanchez de jesus */
/* programa 2.19 */
#include<stdio.h>/* area de cabecera */
float lado,area; /* definicion de variables */
int main()/* funcion main e inicio */
{
    printf("ingresa la medida del lado del cuadrado: ");/* letrero pedir lado */
    scanf("%f",&lado);/* igresar lado */
    fflush(stdin);/* resetear buffer */
    area = (lado*lado);/* hacer area */
    printf("el area del cuadrado es de %.2f",area);/* escribir area */
    return 0;

}