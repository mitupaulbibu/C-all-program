#include<stdio.h>

int main() {
    int* ptr; // pointer declaration
    int a;
    ptr = &a; // pointer initialization

    printf("Value of a = %d", *ptr);
    return 0;
}
