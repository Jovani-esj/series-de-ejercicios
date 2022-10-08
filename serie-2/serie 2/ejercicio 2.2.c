/* programa hecho por jovani emmanuel sanchez de jesus */
// ejercicio 2.2
#include <stdio.h> /* zona de cabecera */

float m,d,t; /* definicion de las variables */
int main() /* inicio del programa main */
{
    printf("/n ingresa la cantidad de dinero en pesos mexicanos: "); /* letrero para pedir la cantidad de mxn */
    scanf("%f",&m); /* ingresar el valor de m */
    fflush(stdin); /* resetear el buffer */
    printf("ingresa el tipo de cambio actual: ");/* letrero para pedir el tipo de cambio actual  */
    scanf("%f",&d); /* ingresa el valor de d */
    t = (m/d);/* hacer t */
    printf("la cantidad de dolares que podras adquirir es con:[%.2f]" ,t);/* escribir la cantidad t */
return 0;
}/* fin del programa */
