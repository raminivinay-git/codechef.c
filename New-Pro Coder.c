#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", & n, & m);
    if (2 * m >= n) {
        printf("NEWBIE\n");
    }
    else {
        printf("PRO\n");
    }
    return 0;
}
