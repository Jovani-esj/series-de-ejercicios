/* programa hecho por Jovani Emmanuel sanchez de jesus */
/* programa numero 2.18 */
#include<stdio.h>
char sabor[20],tamano[12];
int numero_huevos, gramos_arina; /* declaramos las variables */
int main()
{
    printf("ingresa el sabor, hay fresa, chocolate y zarzamora : "); /* letrero para pedir el sabor */
    scanf("%s",&sabor);/* ingresar el sabor */
    fflush(stdin);/* resetear buffer */
    printf("ingresa el tamano, chico, mediano, grande : ");/* letrero pedir el tamano */
    scanf("%s",&tamano);/* ingresar el tamano */
    fflush(stdin);/* resetear buffer */
    printf("ingresa el numero de huevos a usar : ");/* letrero pedir numero de huevos */
    scanf("%i",&numero_huevos);/* ingresa numero de huevos */
    fflush(stdin);/* resetear buffer */
    printf("ingresa los gramos de harina a usar: ");/* letrero pedir gramos de harina */
    scanf("%i",&gramos_arina);/* ingresa los gramos de harina */
    fflush(stdin);/* resetear buffer */
    printf("tu pastel sera tamano %s",tamano);/* escribir salida tamano pastel */
    printf("\ntu pastel sera sabor %s",sabor);/* escribir salida sabor pastes */
    printf("\ntu pastel se esta preparando");/* escribir salida */
    printf("\ntu pastel esta listo");/* escribir salida */

    return 0;
}