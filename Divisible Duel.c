#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int x, y;
        int even = 0, odd = 0;
        scanf("%d %d", & x, & y);
        for (int i = x; i <= y; i++) {
            if (i % x == 0) {
                if (i % 2 == 0) {
                    even += i;
                }
                else {
                    odd += i;
                }
            }
        }
        if (even > odd) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
