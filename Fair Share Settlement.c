#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n, k;
        scanf("%d %d", & n, & k);
        k = k + 1;
        int share = n / k;
        n = n - ((k - 1) * share);
        printf("%d\n", n);
    }
    return 0;
}
