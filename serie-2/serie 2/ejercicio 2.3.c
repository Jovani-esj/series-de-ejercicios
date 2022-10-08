/* programa hecho por jovani emmanuel sanchez de jesus */
#include <stdio.h> /* inicio del programa */
int an, ac, edad;/* zona de definicion de las variables */
int main() 
{
    printf("ingresa el ano de nacimiento: "); /* letrero para pedir ano de nacimiento */
    scanf("%i",&an);/* ingresar el valor de an */
    fflush(stdin); /* resetear el buffer */
    printf("ingresa el ano actual : "); /* letrero para pedir el ano actual */
    scanf("%i",&ac); /* ingresar el valor de ac */
    fflush(stdin); /* resetear el buffer */
    edad = ac - an; /* hacer edad de la persona */
    printf("la edad de la persona es de :[%i] ",edad); /* escribir la edad de la persona */
    return 0; 
} /* fin del programa */