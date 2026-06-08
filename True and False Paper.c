#include <stdio.h>

int main() {
    int k, n, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d %d", & n, & k);
        if (k == n) {
            printf("0\n");
        }
        else {
            printf("%d\n", n - k);
        }
    }
    return 0;
}
