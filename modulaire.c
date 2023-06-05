#include<stdio.h>
#include<stdlib.h>
#include "modulaire.h" // inclure le fichier modulaire.h

int main(int argc, char* argv[]) {
    printf("La somme est : %d\n", add(2,5));
    return 0;
}

// Les fonctions
int add (int a, int b) {
    return a + b;
}