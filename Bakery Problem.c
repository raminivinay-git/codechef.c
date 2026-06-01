#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", & n, & k);
    if (k + (n * 60) < (n * 100)) {
        printf("%d\n", k + (n * 60));
    }
    else {
        printf("%d\n", n * 100);
    }
    return 0;
}
