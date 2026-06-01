#include <stdio.h>

int main() {
    int x, n, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d %d", & n, & x);
        if (n <= x) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
