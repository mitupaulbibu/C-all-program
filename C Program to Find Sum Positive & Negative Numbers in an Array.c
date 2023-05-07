#include <stdio.h>

int main() {
    int intSize = sizeof(int);
    printf("Size of int: %d bytes\n", intSize);

    float floatSize = sizeof(float);
    printf("Size of float: %d bytes\n", floatSize);

    double doubleSize = sizeof(double);
    printf("Size of double: %d bytes\n", doubleSize);

    char charSize = sizeof(char);
    printf("Size of char: %d byte\n", charSize);

    return 0;
}
