#include<stdio.h>
#include<stdlib.h>

int main(int args, char* argv[]) {
    // I) Obtenir l adresse d une variable
    int age = 18;
    printf("L adresse du variable age est : %p\n", &age);

    // II) Declaration pointeur et utilisation
    int *pointeurSurAge = &age;
    printf("La valeur du pointeur est : %p\n", pointeurSurAge);
    printf("La valeur dont l adresse est le pointeur est : %d\n", *pointeurSurAge);

    return 0;
}