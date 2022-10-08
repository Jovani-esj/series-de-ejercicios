/* programa hecho por Jovani Emmanuel Sanchez De Jesus */
/* programa numero 2.14 */
#include <stdio.h> /* zona de cabeceras */
int numero_dias;
float costo_hotel_dia, costo_comida_dia,monto_cheque;
const int extra = 100; /* definicion de variables */
int main() /* funcion main e inicio */
{
    printf("ingresa el numero de dias a estar en monterrey: ");/* letrero pedir numero de dias */
    scanf("%i",&numero_dias); /* ingresar el numero de dias */
    fflush(stdin);/* resetear buffer */
    printf("ingresa el costo del hotel por dia: ");/* letrero pedir costo hotel dia */
    scanf("%f",&costo_hotel_dia);/* ingresa el costo del hotel  */
    fflush(stdin);/* resetear buffer */
    printf("ingresa el costo de la comida por dia: ");/* letrero pedri el costo comida dia */
    scanf("%f",&costo_comida_dia); /* ingresa el costo comida */
    monto_cheque = numero_dias*(costo_comida_dia+costo_hotel_dia)+extra;/* hacer el monto del cheque */
    printf("el monto del cheque debera ser por:[%.2f] ",monto_cheque);/* escribir el monto del cheque */
    return 0;
}/* fin del programa */


