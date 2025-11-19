#include <stdio.h>
#include <string.h>

int main() {
    char name[50];   // space to store up to 49 characters + NULL

    // Step 1: Ask the user to enter a string
    printf("Enter your name: ");
    scanf("%s", name);    // reads the name (no spaces)

    // Step 2: Print the string back
    printf("You entered: %s\n", name);

    //  Find string length
    int length = strlen(name);

    //  Display the length
    printf("The length of your name is: %d characters\n", length);

    return 0;
}
