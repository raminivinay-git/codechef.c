#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int x, y;
        scanf("%d %d", & x, & y);
        x = 50 - x;
        int min = y * 2;
        int max = (y + 5) * 2;
        if (x >= min && x <= max) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
