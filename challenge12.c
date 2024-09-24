#include<stdio.h>
int main(int argc, char const *argv[])
{
    int s,a;
    printf("saisir un entier de 4 chiffres s = ");
    scanf("%d",&s);
    a = s ;
    s = (a%10)*1000;
    a = a / 10;
    s += (a%10)*100;
    a /= 10;
    s += (a%10)*10;
    a /= 10;
    s += (a%10);
    printf("l'inverse du s est : %d",s);
    return 0;
}
