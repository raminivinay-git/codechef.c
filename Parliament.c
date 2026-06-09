#include <stdio.h>

int main() {
    int n, x, t;

    scanf("%d", & t);

    while (t--) {
        scanf("%d %d", & n, & x);

        if (2 * x >= n)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
