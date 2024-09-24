#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int x1 ,x2 , y1, y2, z1, z2;
    float Dt;
    printf("Donner les coordonnee de la premier point : ");
    scanf("%f%f%f",&x1,&y1,&z1);
    printf("Donner les coordonnee de la deuxieme point : ");
    scanf("%f%f%f",&x2,&y2,&z2);
    Dt = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2) + pow((z2 - z1),2));
    printf("la distance entre les deux points : %.2f",Dt);
    return 0;
}
