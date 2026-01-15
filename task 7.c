#include <stdio.h>

#define BUFFER_SIZE 10

int buffer[BUFFER_SIZE];
int head = 0;
int count = 0;

void insert_sample(int value) {
    buffer[head] = value;
    head = (head + 1) % BUFFER_SIZE;
    if (count < BUFFER_SIZE) count++;
}

void print_samples() {
    printf("in order: ");
    int start = (count == BUFFER_SIZE) ? head : 0;
    for (int i = 0; i < count; i++) {
        printf("%d ", buffer[(start + i) % BUFFER_SIZE]);
    }
    printf("\n");
}

int main() {
    int valu;
    printf("Enter sensor values (Enter -1 to stop and print):\n");
    while (1) {
        scanf("%d", &valu);
        if (valu == -1) break;
        insert_sample(valu);
    }
    print_samples();
    return 0;
}
