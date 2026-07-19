#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int x, y, ans;
        scanf("%d %d", & x, & y);
        if (x >= y) {
            printf("0\n");
        }
        else {
            y = y - x;
            ans = (y + 7) / 8;
            printf("%d\n", ans);
        }
    }
    return 0;
}
