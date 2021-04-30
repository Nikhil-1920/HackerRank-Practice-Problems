// Array Reversal
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num, *arr;

    scanf("%d", &num);
    arr = (int *)malloc(num * sizeof(int));

    for(int i = 0; i < num; ++i)
        scanf("%d", &arr[i]);
    
    for(int i = 0, j = (num - 1); i <= j; ++i, --j) {
        int temp = arr[i];
        arr[i]   = arr[j];
        arr[j]   = temp;
    }

    for(int i = 0; i < num; ++i)
        printf("%d ", arr[i]);
    
    printf("\n");
    return 0;
}