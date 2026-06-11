#include <stdio.h>

int main() {
    int n, m, k, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d %d %d", & n, & m, & k);
        if (n <= (m - k)) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
