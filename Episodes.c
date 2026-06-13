#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int k, n;
        scanf("%d %d", & k, & n);
        int total = k * n;
        int h = total / 60;
        int m = total % 60;
        printf("%d %d\n", h, m);
    }
    return 0;
}
