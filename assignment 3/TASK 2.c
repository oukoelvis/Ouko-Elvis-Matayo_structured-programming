#include <stdio.h>

int main() {

// Declaring of integer

    int num = 13 ;

// Declaring the pointer

    int *ptr;

 // Storage of address

     ptr = &num;

// displaying output

      printf("Value of num: %d\n", num);

      printf("Value stored in ptr (address): %p\n", (void*)ptr);

      printf("Address of num: %p\n", (void*)&num);

     printf("Value accessed using *ptr (dereferenced): %d\n", *ptr);

    return 0;
}
