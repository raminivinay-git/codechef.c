#include <stdio.h>

int main() {
    int n, x;
    int t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d %d", & n, & x);
        printf("%d\n", (n / x) / 3);
    }
    return 0;
}
