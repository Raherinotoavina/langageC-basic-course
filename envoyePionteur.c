#include<stdio.h>
#include<stdlib.h>

// Prototypes :
void multiplyBy3 (int *pointerAge);

// Main :
int main(int argc, char* argv[]) {
    int age = 5;
    multiplyBy3(&age);

    printf("L age multiplié par trois est : %d\n", age);
}

// Construct the function :
void multiplyBy3 (int *pointerAge) {
    *pointerAge *= 3;
}