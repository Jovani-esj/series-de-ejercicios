/* programa hecho por jovani emmanuel sanchez de jesus */
/* ejercicio 2.17 */
#include<stdio.h>
#include<conio.h>
float medida_brazos,medida_largo,medida_cintura;
char color_tela[20];
int main()
{
    printf("ingresa la medida del largo de los brazos :");
    scanf("%f",&medida_brazos);
    fflush(stdin);
    printf("ingresa la medida del largo del vestido: ");
    scanf("%f",&medida_largo);
    fflush(stdin);
    printf("ingresa la medida del largo de la cintura: ");
    scanf("%f",&medida_cintura);
    fflush(stdin);
    printf("ingresa el color de la tela: ");
    scanf("%s",&color_tela);
    fflush(stdin);
    printf("listo, tu vestido sera confeccionado segun las caracteristicas dadas: ");
    printf("\ntu vestido sera de color: %s ",color_tela);
    return 0;

}