#include<stdio.h>
int main()
{
    float c;
    printf("Saisir  la température en Celsius c = ");
    scanf("%f",&c);
    c += 273.15 ;
    printf("la température en kelvin est k = %.2f .",c);
    return 0;
}
