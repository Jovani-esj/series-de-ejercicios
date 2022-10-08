/* ejercicio 2.1 */
/* programa hecho por Jovani Emmanuel Sanchez De Jesus */
#include <stdio.h> /* zona de cabecera */

float b,a,area;/* zona de definicion de variables */

int main()/* funcion main e inicio */
{
    printf("introduce la base del triangulo: "); /* letrero para pedir b */
    scanf("%f",&b); /* pedir b */
    fflush(stdin);/* resetear buffer */
    printf("introduce la medida de la altura: ");/*letrero pedir a */
    scanf("%a",&a);/* pedir a */
    area = (b*a)/2;/* hacer area */
    printf("El area del triangulo es de: [%f] ",area ); /* salida imprime area */
    return 0 ;
}/* fin del programa principal */