// Printing Pattern Using Loops
#include <stdio.h>

void PrintPattern(int i, int j, int first, int last, int n) {
    if(n >= 1) {
        if(i == first || i == last || j == first || j == last) {
            printf("%d ", n);
        }
        else {
            PrintPattern(i, j, first + 1, last - 1, n - 1);
        }
        
    }
}

int main(void) {
    int n;
    scanf("%d", &n);
    int row = (2 * n) - 1;
    
    for(int i = 0; i < row; ++i) {
        for(int j = 0; j < row; ++j) {
            PrintPattern(i, j, 0, row - 1, n);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}