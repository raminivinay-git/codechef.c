#include <stdio.h>

int main() {
    int x, n, k, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d %d %d", & n, & x, & k);
        if ((n * x) <= k) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
