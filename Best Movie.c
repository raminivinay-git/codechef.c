#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n;
        scanf("%d", & n);
        int score, cost, ans = 999999;
        for (int i = 0; i < n; i++) {
            scanf("%d %d", & score, & cost);
            if (score >= 7) {
                if (cost < ans) {
                    ans = cost;
                }
            }
        }
        if (ans == 999999) {
            printf("-1\n");
        }
        else {
            printf("%d\n", ans);
        }
    }
    return 0;
}
