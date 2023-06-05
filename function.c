#include<stdio.h>

int multiple (int a) {
    return 3 * a;
}

int main (int args, char* argv[]) {
    int nb = 0;

    printf("Entrer un nombre : ");
    scanf("%d", &nb);

    int triplet = multiple(nb);
    
    printf("Le nombre multiplier est : %d\n", triplet);
}