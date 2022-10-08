/* programa hecho por jovani emmanuel sanchez de jesus */
/* ejercicio 2.21 */
#include<stdio.h> /* zona de cabecera  */
int anos;/* definicion de variables */
float meses,semanas,dias;
int main() /* funcion main e inicio */
{
    printf("escribe tu edad");/* letrero pedir edad */
    scanf("%i",&anos);/* ingresar la edad */
    fflush(stdin);/* resetear buffer */
    meses = anos*12;/* hacer meses */
    semanas = meses*4.34524;/* hacer semanas */
    dias = semanas *7;/* hacer dias */
    printf("la persona ha vivido");/* mostrar salida meses */
    printf("\n%f",meses);
    printf(" meses");/* mostrar salida semanas */
    printf("\n%f",semanas);
    printf(" semanas");/* mostrar salida dias */
    printf("\n%f",dias);
    printf(" dias");
    return 0;
}/* fin del programa */