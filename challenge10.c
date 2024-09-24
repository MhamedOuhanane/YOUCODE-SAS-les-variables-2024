#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    float r;
    double p = 3.15 , e = 4/3 , V;
    printf("Saisir le rayon de la sphere r = ");
    scanf("%f",&r);
    V = e * p * pow(r,3);
    printf("le volude du sphere est V = %.2lf",V);
    return 0;
}
