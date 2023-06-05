#include <stdio.h>
#include <math.h>

/*
Les operations basiques :
+ addition
- soustraction
* multiplication
/ division
% modulo => reste de la division

Utilisation d un bibliotheque "math.h:
#include <math.h>

*/

int main(int argc, char* argv[]) {
    int a = 5;
    int b = 6;
    int resultat = a + b;
    int c = sqrt(4);

    printf("La somme de a et b est : %d et c est : %d\n",resultat, c);
}