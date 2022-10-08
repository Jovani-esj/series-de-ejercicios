/* programa hecho por jovani emmanuel sanchez de jesus */
/* ejercicio 2.11 */
#include <stdio.h> /* inicio del programa */
float costo_kwh,kw_consumidos,pago; /* definicion de variables */
int main()
{
    printf("ingresa el numero de kw consumidos: ");/* letrero para pedir los kw consumidos*/
    scanf("%f",&kw_consumidos);/* ingresa los kw */
    fflush(stdin);/* resetear el bufer */
    printf("ingresa el costo por kw hora ");/* letrero para pedir el costo por kwh*/
    scanf("%f",&costo_kwh);/* ingresa el costo por hora kw */
    fflush(stdin);/* resetear el buffer */
    pago = costo_kwh*kw_consumidos; /* hacer el costo total */
    printf("el pago que tendra que hacer la persona es de:[%.2f] ",pago); /* escribir el total a pagar */
    return 0;
}/* fin del programa */