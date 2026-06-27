#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n;
        scanf("%d", & n);
        n = n * 1000;
        printf("%d\n", n / 100);
    }
    return 0;
}
