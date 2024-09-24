#include<stdio.h>
int main()
{
    float k;
    printf("Entrer  la vitesse en kilomètres par heure(k/h) = ");
    scanf("%f",&k);
    k *= 0.27778 ;
    printf("la vitesse en metre par seconde (m/s) est = %.5f .",k);
    return 0;
}