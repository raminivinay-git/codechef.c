#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);

    while (t--) {
        int x, y;
        scanf("%d %d", & x, & y);

        int neighbours = x / y;

        if (neighbours > 20)
            neighbours = 20;

        printf("%d\n", neighbours);
    }

    return 0;
}
