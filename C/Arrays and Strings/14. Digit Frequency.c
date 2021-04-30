// Finding frequency of each digits in the given string
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1000];
    int  a[10] = {0};
    scanf("%s", s);
    for(int i = 0; i < strlen(s); ++i) {
        int j = s[i] - '0';
        if(j >= 0 && j <= 9)
            a[j]++;
    }

    for(int i = 0; i < 10; ++i)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}