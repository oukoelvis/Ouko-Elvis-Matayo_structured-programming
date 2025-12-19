#include <stdio.h>

// Function using pointers to swap original values

 void swapNumbers(int *x, int *y) {

    int func_1 = *x;

    *x = *y;

    *y = func_1;
}

int main() {

    int a = 54, b = 45;

    printf("Before: a = %d, b = %d\n", a, b);


    swapNumbers(&a, &b);

    printf("After:  a = %d, b = %d\n", a, b);

    return 0;
}
