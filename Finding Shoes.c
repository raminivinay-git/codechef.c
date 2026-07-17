#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n, m, extra;
        scanf("%d %d", & n, & m);
        if (m >= n) {
            printf("%d\n", n);
        }
        else if (m < n) {
            printf("%d\n", (n - m) + n);
        }
    }
    return 0;
}
