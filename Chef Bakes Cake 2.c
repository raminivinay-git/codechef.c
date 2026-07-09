#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);

    while (t--) {
        int n, i;
        scanf("%d", & n);

        int a[n], b[n];

        for (i = 0; i < n; i++) {
            scanf("%d", & a[i]);
        }

        for (i = 0; i < n; i++) {
            scanf("%d", & b[i]);
        }

        int cost = 0;

        for (i = 0; i < n; i++) {
            if (a[i] > b[i]) {
                cost += (a[i] - b[i]);
            }
        }

        printf("%d\n", cost);
    }

    return 0;
}
