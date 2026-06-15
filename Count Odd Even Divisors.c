#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n, even = 0, odd = 0;
        scanf("%d", & n);
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                if (i % 2 == 0) {
                    even++;
                }
                else {
                    odd++;
                }
            }
        }
        printf("%d %d\n", odd, even);
    }
    return 0;
}
