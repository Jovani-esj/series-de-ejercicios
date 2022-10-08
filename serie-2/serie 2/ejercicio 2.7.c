/* programa hecho por jovani emmanuel sanchez de jesus */
/* programa numero 2.7 */
#include <stdio.h> /* inicio del programa */
float costo_boleto,costo_kilometro,kilometros_recorridos; /* definicion de variables */
int main()
{
    printf("ingresa el numero de kilometros recorridos: ");/* letrero para pedir kiilometros recorridos*/
    scanf("%f",&kilometros_recorridos);/* ingresa los kilometros recorridos*/
    fflush(stdin);/* resetear el bufer */
    printf("ingresa el costo por kilometro recorrido: ");/* letrero para pedir el costo por kilometro*/
    scanf("%f",&costo_kilometro);/* ingresa el costo por kilometro */
    fflush(stdin);/* resetear el buffer */
    costo_boleto = costo_kilometro*kilometros_recorridos; /* hacer el cobro  */
    printf("el costo del boleto sencillo es de :[%f] ",costo_boleto); /* escribir el cobro total  */
    return 0;
}/* fin del programa */
