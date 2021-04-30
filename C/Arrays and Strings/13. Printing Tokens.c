// Printing Tokens
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    
    for(int i = 0; i < strlen(s); ++i) {
        if(s[i] == ' ')
            s[i] = '\n';
    }

    printf("%s\n", s);
    free(s);
    return 0;
}