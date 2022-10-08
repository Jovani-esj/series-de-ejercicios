/* jOVANI EMMANUEL SANCHEZ DE JESUS */
/* programa 2.20 */
#include<stdio.h> /* zona de cabecera */
float calificacion_e1,calificacion_e2,calificacion_e3,calificacion_total; /* declaracion de variables */
int main()/* funcion main e inicio */
{
    printf("introduce la calificacion del primer examen: ");/* letrero pedri la calificacion e1 */
    scanf("%f",&calificacion_e1);/* ingresar la calificacion1 */
    fflush(stdin);/* resetear buffer */
    printf("introduce la calificacion del segundo examen: ");/* letrero pedir calificacion e2 */
    scanf("%f",&calificacion_e2); /* ingresar la calificacion e2 */
    fflush(stdin);/* resetear buffer */
    printf("introduce la calificacion del tercer examen: ");/* letrero pedir calificacion e3 */
    scanf("%f",&calificacion_e3);/* ingresar calificacion e3 */
    fflush(stdin);/* resetear buffer */
    calificacion_e1 = calificacion_e1*.25;/* hacer valor de cada examen e1,e2,e3 y calificacion total */
    calificacion_e2 = calificacion_e2*.25;
    calificacion_e3 = calificacion_e3*.50;
    calificacion_total = calificacion_e1+calificacion_e2+calificacion_e3;
    printf("la calificacion obtenida del alumno es de:%.2f ",calificacion_total); /* escribir la salida de calificacion total */
    return 0;
}