#include <stdio.h>

int main() {
    int l, r, i;
    scanf("%d %d", & l, & r);
    for (i = l; i <= r; i++) {
        if (i % 2 == 0) {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO");
    return 0;
}
