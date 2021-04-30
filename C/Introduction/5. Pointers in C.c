// Pointers in C
#include <stdio.h>
#include <stdlib.h>

void update(int *a, int *b) {
    int temp = *a;
    *a = (*a) + (*b);
    *b = abs(temp - (*b));
}

int main(void) {
    int x, y;
    int *px = &x, *py = &y;

    scanf("%d %d", &x, &y);
    update(px, py);
    printf("%d %d\n", x, y);

    return 0;
}