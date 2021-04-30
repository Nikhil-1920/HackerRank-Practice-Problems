// Bitwise Operators
#include <stdio.h>

void calculate_the_maximum(int n, int k) {
    int and_max = 0;
    int or_max  = 0;
    int xor_max = 0;
    for(int i = 1; i < n; ++i) {
        for(int j = i + 1; j <= n; ++j) {
            and_max = (i & j) > and_max && (i & j) < k ? (i & j) : and_max;
            or_max  = (i | j) > or_max &&  (i | j) < k ? (i | j) : or_max;
            xor_max = (i ^ j) > xor_max && (i ^ j) < k ? (i ^ j) : xor_max;
        }
    }
    printf("%d\n", and_max);
    printf("%d\n", or_max);
    printf("%d\n", xor_max);
}

int main(void) {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n,k);
    return 0;
}