#include <stdio.h>

int main() {
    int j1, j2, j3, j4, j5, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d %d %d %d %d", & j1, & j2, & j3, & j4, & j5);
        if ((j1 + j2 + j3 + j4 + j5) >= 4) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
