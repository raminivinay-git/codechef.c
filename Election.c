#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", & n, & k);
    n = (n / 2) + 1;
    if (k >= n) {
        printf("0");
    }
    else {
        printf("%d", n - k);
    }
    return 0;
}
