#include <stdio.h>

int main() {
 int n, i, valu, pos;
  int arr[101];

  printf("Input the size of array : ");
   scanf("%d", &n);

  printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

  printf("Input the value to be inserted : ");
    scanf("%d", &valu);
    printf("Input the Position, where the value to be inserted : ");
    scanf("%d", &pos);

    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = valu;

    printf("\nAfter Insert the element the new list is: ");
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
