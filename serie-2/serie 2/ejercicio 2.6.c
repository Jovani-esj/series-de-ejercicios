/* codigo realizado por jovani emmanuel sanchez de jesus */
#include<stdio.h>/* funcion de cabecera */
#include<math.h>
float a,b,c,d;

int main()/* funcion main e inicio */
{
    printf("ingresa el lado a: "); /* letrero para pedir el lado a */
    scanf("%f",&a);/* ingresar lado a */
    fflush(stdin);/* resetear buffer */
    printf("ingresa el lado b: ");/* letrero para pedir el lado b */
    scanf("%f",&b);/* ingresar el lado b */
    fflush(stdin);/* resetear el buffer */
    c = (a*a+b*b); /* hacer c */
    d = pow(c,.5);/* sacar raiz cuadrada de c, hacer d */
    printf("el valor de la hipotenusa es de :[%.2f] ",d); /* escribir el valor de la hipotenusa */
    return 0;
}/* fin del programa */
