// Functions in C
#include <stdio.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int max_of_four(int a, int b, int c, int d) {
    return max(a, max(b, max(c, d)));
}

int main(void) {
    int a, b, c, d, max = 0;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    max = max_of_four(a, b, c, d);
    printf("%d\n", max);

    return 0;
}