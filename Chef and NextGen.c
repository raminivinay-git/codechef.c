#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int a, b, x, y;
        scanf("%d %d %d %d", & a, & b, & x, & y);
        int total_units = x * y;
        int want = a * b;
        if (total_units >= want) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
