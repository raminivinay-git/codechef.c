#include <stdio.h>

int main() {
    char a[4];
    scanf("%s", & a);
    if (a[0] == 's' || a[3] == 's') {
        printf("YES");
    }
    else {
        printf("NO");
    }

    return 0;
}
