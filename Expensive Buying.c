#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n, k;
        scanf("%d %d", & n, & k);
        int c[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", & c[i]);
        }
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - 1; j++) {
                if (c[j] < c[j + 1]) {
                    int temp = c[j];
                    c[j] = c[j + 1];
                    c[j + 1] = temp;
                }
            }
        }
        int sum = 0;
        for (int i = 0; i < k; i++) {
            sum += c[i];
        }
        printf("%d\n", sum);
    }
    return 0;
}
