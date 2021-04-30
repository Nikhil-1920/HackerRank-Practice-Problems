// Sum of n Numbers using Array
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, sum = 0;
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    for(int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n; ++i)
        sum += arr[i];

    printf("%d\n", sum);
    free(arr);
    
    return 0;
}
