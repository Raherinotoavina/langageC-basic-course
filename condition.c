#include <stdio.h>

int main (int argc, char* argv[]) 
{
    int age = 0;
    printf("Entrer votre age : ");
    scanf("%d", &age);

    switch (age)
    {
    case 18:
        printf("Vous etes majeur.");
        break;
    
    default:
        printf("Vous etes mineur.");
        break;
    }
}