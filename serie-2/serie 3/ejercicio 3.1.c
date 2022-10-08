/* programa hecho por jovani emmanuel sanchez de jesus */
#include<stdio.h>/* zona de cabecera */
int edad,edad_minima;/* declaracion de variables */
char resultado[20];
int main()/* funcion main e inicio */
{
    printf("introduce la edad de la persona: ");/* letrero pedir edad de la persona */
    scanf("%i",&edad);/* introduce la edad */
    printf("introduce la edad minima para poder votar: ");/* letrero pedir edad minima para votar */
    scanf("%i",&edad_minima);/* ingresa la edad minima */
    if (edad>=edad_minima)/* hacer sentencia if */
    {
        printf("la persona si puede votar en las elecciones");/* si es verdadero mostrar esto */
    }else{
        printf("la persona no puede votar en las proximas elecciones");/* si la sentencia es falsa, mostrar esto */
    }
    return 0;
}/* fin del programa */