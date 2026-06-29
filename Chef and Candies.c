#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n, x;
        scanf("%d %d", & n, & x);

        if (x >= n) {
            printf("0\n");
        }
        else {
            n = n - x;
            printf("%d\n", (n + 3) / 4);
        }
    }
    return 0;
}
