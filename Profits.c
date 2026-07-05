#include<stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n, x;
        int profit = 0;
        scanf("%d %d", & n, & x);
        for (int i = 1; i <= n; i++) {
            int p = i - x;
            if (p > 0) {
                profit = profit + p;
            }
        }
        printf("%d\n", profit);
    }
    return 0;
}
