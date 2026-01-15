#include <stdio.h>

int main() {
    int arr[6][4] = {0};
    int i, j, counter = 1;


    for (i = 0; i < 6; i++) {
        for (j = 0; j < 4; j++) {
            arr[i][j] = counter++;
        }
    }

    printf("2D Array Elements:\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
