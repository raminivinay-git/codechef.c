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

            int chef = a[0];
            if (a[i] >= chef) {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
