/* programa hecho por jovani emmanuel sanchez de jesus */
#include <stdio.h> /* zona de cabecera */

float as,am,aa,s;/* definicion de variables */
int main()/* funcion main e inicio */
{
    printf("ingresa el sueldo de la persona: ");/* letrero pedir el sueldo de la persona */
    scanf("%f",&s);/* escribir sueldo s */
    fflush(stdin);/* resetear buffer */ 
    as = s*.15; /* hacer el ahorro semanal */
    am = as*4;/* hacer ahorro mensual  */
    aa = am*12;
    printf("el ahorro semanal sera de:[%.2f] ",as);/* imprimir salida ahorro anual */
    printf("\n el ahorro anual sera de: [%.2f] ",aa );/*imprimir el ahorro anual */
    return 0;
}/* fin de programa */
