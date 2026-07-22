#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n, x, k;
        scanf("%d %d %d", & n, & x, & k);
        int bot = k / x;
        if (n < bot) {
            printf("%d\n", n);
        }
        else {
            printf("%d\n", bot);
        }
    }
    return 0;
}
