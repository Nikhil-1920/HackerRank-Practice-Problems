// Playing With Characters
#include <stdio.h>

int main(void) {
    char ch;

    char s[20], sen[100];
    scanf("%c", &ch);
    scanf("%s\n", s);
    scanf("%[^\n]%*c", sen);
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);

    return 0;
}