#include <stdio.h>

int main()
{

      int count = 54;

      int *pCount = &count;

    *pCount = 45;

    printf("The new value of count:%d\n", count);

    return 0;
}
