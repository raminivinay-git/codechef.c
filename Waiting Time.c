#include <stdio.h>

int main() {
    int x, k, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d %d", & k, & x);
        int weeks = k * 7;
        int days = weeks - x;
        printf("%d\n", days);
    }
    return 0;
}
