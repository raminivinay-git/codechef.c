#include <stdio.h>

int main() {
    int n, k, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d %d", & n, & k);
        n = n + 1;
        if (n <= k) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
