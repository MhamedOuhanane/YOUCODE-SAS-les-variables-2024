#include<stdio.h>
int main(int argc, char const *argv[])
{
    float a , b;
    printf("Saisir un nombre reel a = ");
    scanf("%f",&a);
    printf("Saisir un nombre reel b = ");
    scanf("%f",&b);
    printf("%.2f \n",a + b );
    printf("%.2f \n",a - b );
    printf("%.2f \n",a * b );
    printf("%.2f",a / b );
    return 0;
}
