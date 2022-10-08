/* programa hecho por Jovani Emmanuel Sanchez De Jesus */
/* ejercicio 2.16 */
#include <stdio.h> /* zona de cabeceras */
int jitomates,carne,torta;/* se declaran las variables */
int main()/* funcion main y funcion inicio */
{
    printf("ingresa el numero rodajas de jitomate que deseas entre 0 y 5: "); /* letrero pedir el numero de rodajas de jitomate */
    scanf("%i",&jitomates);/* ingresa el numero de jitomates */
    fflush(stdin);/* resetear buffer */
    printf("ingresa la cantidad de piezas de carne entre 1 y 3: ");/* letrero pedir el numero de piezas de carne */
    scanf("%i",&carne);/* ingresa el numero de carnes */
    fflush(stdin);/* resetear buffer */
    printf("tu torta se esta preparando");/* escribir salida  */
    printf("\ntu torta se ha cocinado");/* escribir salida */
    return 0;
    
}