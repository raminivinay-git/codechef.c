#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n, x;
        scanf("%d %d", & n, & x);
        if (n % 6 == 0) {
            n = n / 6;
        }
        else {
            n = (n / 6) + 1;
        }
        printf("%d\n", x * n);
    }
    return 0;
}
