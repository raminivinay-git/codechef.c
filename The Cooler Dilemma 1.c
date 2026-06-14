#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int x, y, m;
        scanf("%d %d %d", & x, & y, & m);
        if ((m * x) < y) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
