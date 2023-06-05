#include<stdio.h>

// Annonce du prototype
int multiple(int a);

int main (int argc, char* argv[]) {
    printf("Le multiple est : %d\n",multiple(5));

    return 0;
}

// Maintenant on peut cree notre fonction derriere "main"
int multiple(int a) {
    return a * 3;
}