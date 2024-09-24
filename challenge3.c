#include<stdio.h>
int main()
{
    float Km;
    printf("Entrer la distance en kilometre Km = ");
    scanf("%f",&Km);
    Km *= 1093.61 ;
    printf("la distance en yards est = %.2f .",Km);
    return 0;
}