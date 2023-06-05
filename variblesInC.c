#include <stdio.h>

/* Les types :
1) integer with negatif
- signed char,
- int,
- long,

2) double with negatif
- float,
- double,

3) Positif : preceder les type avec "unsigned" + char, int, long,.... (Permet aussi de stocker des valeur plus long)

*/

int main(int argc, char* argv[]) {
    // I) Declaration des variable
    signed char number = 1;
    const int NUM = 2;// constante
    int age;

    // II) Formatting
    printf("Le nombre numero 1 est %d et 2 est %d\n\n", number, NUM);

    // III) Recuperation saisi
    printf("Votre age : ");
    scanf("%d", &age);
    printf("\nAh vous avez %d ans\n", age);

    return number;
}