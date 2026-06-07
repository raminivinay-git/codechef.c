#include <stdio.h>

int main() {
    int x, t, y;
    scanf("%d", & t);
    while (t--) {
        scanf("%d %d", & x, & y);
        if ((x * 3) <= y) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
