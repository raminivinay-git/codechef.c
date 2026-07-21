#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int sx, sy, ex, ey;
        scanf("%d %d %d %d", & sx, & sy, & ex, & ey);

        if (sx == ex && sy != ey) {
            printf("2\n");
        }

        if (sx != ex && sy == ey) {
            printf("2\n");
        }

        if (sx != ex && sy != ey) {
            printf("1\n");
        }
    }
    return 0;
}
