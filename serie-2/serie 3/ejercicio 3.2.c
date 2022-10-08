#include<stdio.h>
float sueldo_semanal,pago_hora,sueldo_horas_dobles,sueldo_horas_normales;
int horas_trabajadas,horas_extra;
int main()
{
    printf("escribe el numero de horas trabajadas a la semana");
    scanf("%i",&horas_trabajadas);
    printf("escribe el sueldo por hora del trabajador");
    scanf("%f",&pago_hora);
    if (horas_trabajadas>40)
    {
        horas_extra = horas_trabajadas - 40;
        sueldo_horas_dobles = (pago_hora*2)*horas_extra;
        sueldo_semanal= sueldo_horas_dobles +(40*pago_hora);
    }else{
        sueldo_horas_normales = horas_trabajadas*pago_hora;
        sueldo_semanal = sueldo_horas_normales;
    }
    printf("\nel pago de las horas extras sera de %f",sueldo_horas_dobles);
    printf("\nel sueldo semanal es de %f",sueldo_semanal);
    return 0;
    
    
}