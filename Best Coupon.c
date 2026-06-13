#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int x;
        scanf("%d", & x);
        int coupon1 = (10 * x) / 100;
        int coupon2 = 100;
        if (coupon1 < coupon2) {
            printf("%d\n", coupon2);
        }
        else {
            printf("%d\n", coupon1);
        }
    }
    return 0;
}
