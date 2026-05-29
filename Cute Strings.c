#include <stdio.h>

#include<string.h>

int main() {
    char s[3];
    scanf("%s", & s);
    if (s[0] == s[2] && s[1] == 'w') {
        printf("Cute\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}
