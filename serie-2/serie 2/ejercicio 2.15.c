/* programa hecho por Jovani Emmanuel Sanchez De Jesus */
/* ejercicio 2.15 */
#include <stdio.h> /* zona de cabeceras */
float potencia,voltaje,amperes;
const int resistencia = 4; /* definicion de variables */
int main() /* funcion main e inicio */
{
    printf("ingresa la cantidad de amperes: ");/* letrero pedir numero de dias */
    scanf("%f",&amperes); /* ingresar el numero de amperes i */
    fflush(stdin);/* resetear buffer */
    voltaje = resistencia*amperes;/* hacer el voltaje */
    potencia = voltaje*amperes;/* hacer el voltaje */
    printf("la potencia electrica es de:[%.2f] ",potencia);/* escribir la potencia electrica */
    return 0;
}/* fin del programa */