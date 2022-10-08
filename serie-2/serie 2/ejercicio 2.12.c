/* programa hecho por jovani emmanuel sanchez de jesus */
/* ejercicio 2.12 */
#include <stdio.h> /* zona de cabecera */

float precio_descuento, precio_iva, precio_inicial;/* definicion de variables */
int main()/* funcion main e inicio */
{
    printf("ingresa el precio inicial del articulo: ");/* letrero pedir el precio inicial */
    scanf("%f",&precio_inicial);/* escribir precio inicial */
    fflush(stdin);/* resetear buffer */ 
    precio_descuento = precio_inicial*.80; /* hacer precio con descuento */
    precio_iva = precio_descuento+(precio_descuento*.15);/* hacer precio con iva */
    printf("el precio con descuento del producto es de:[%f] ",precio_descuento);/* imprimir salida precio con descuento */
    printf("\n el precio final con iva es de: [%f] ",precio_iva );/* imprimir salida precio final con iva */
    return 0;
}/* fin de programa */