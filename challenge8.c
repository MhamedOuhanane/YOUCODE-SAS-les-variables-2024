#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int a , b , c , M;
    float e = 1/3;
    printf("Donner la 1er nombre a = ");
    scanf("%f",&a);
    printf("Donner la 1er nombre b = ");
    scanf("%f",&b);
    printf("Donner la 1er nombre c = ");
    scanf("%f",&c);
    M =(a * b *c);
    printf("la moyenne geometrique des trois nombres est : %.2f",pow(M,e));
    return 0;
}
