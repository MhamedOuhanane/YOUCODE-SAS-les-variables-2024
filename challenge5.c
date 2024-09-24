#include<stdio.h>
int main()
{
    float c;
    printf("Saisir  la température en Celsius c = ");
    scanf("%f",&c);
    if (c < 0)
        printf("l'eau est solide");
    else if (c >= 0 && c < 100)
    {
        printf("l'eau est liquide");
    }
    else
        printf("l'eau est a l'etat gaz");
    
    return 0;
}
