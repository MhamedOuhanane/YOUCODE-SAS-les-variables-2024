#include<stdio.h>
int main(int argc, char const *argv[])
{
    float a ,b , c , M;
    printf("Donner la 1er nombre de ponderation=2 a = ");
    scanf("%f",&a);
    printf("Donner la 2er nombre de ponderation=3 b = ");
    scanf("%f",&b);
    printf("Donner la 3er nombre de ponderation=5 c = ");
    scanf("%f",&c);
    M = (a + b + c)/9;
    printf("la Moyenne ponderee des trois nombres a , b et c est %f",M);
    return 0;
}
