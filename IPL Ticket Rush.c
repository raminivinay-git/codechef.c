#include <stdio.h>

int main() {
    int n, m, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d %d", & n, & m);
        if (n <= m) {
            printf("0\n");
        }
        else {
            printf("%d\n", n - m);
        }
    }
    return 0;
}
