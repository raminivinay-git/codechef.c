#include <stdio.h>

int main() {
    int n, m, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d %d", & n, & m);
        printf("%d\n", (n * 5) + (m * 7));
    }
    return 0;
}
