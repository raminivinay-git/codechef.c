#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int x, y;
        scanf("%d %d", &x, &y);

        if (100 * y <= 107 * x)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
