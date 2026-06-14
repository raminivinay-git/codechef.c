#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);

    while (t--) {
        int P, L;
        scanf("%d %d", & P, & L);

        if (L * 100 >= 75 * P)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
