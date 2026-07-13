#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n, m;
        scanf("%d %d", & n, & m);
        m = m / 2;
        printf("%d\n", m + 1);
    }
    return 0;
}
