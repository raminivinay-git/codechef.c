#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n, count = 0;
        scanf("%d", & n);
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", & a[i]);
        }
        int maxsize = a[0];
        int ans = 1;
        for (int i = 0; i < n; i++) {
            if (a[i] > maxsize) {
                maxsize = a[i];
                ans = i + 1;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
