#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n, x;
        scanf("%d %d", & n, & x);
        int N = n * x;

        printf("%d\n", (N + 3) / 4);
    }
    return 0;
}
