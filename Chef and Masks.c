#include <stdio.h>

int main() {
    int x, y, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d %d", & x, & y);
        int X = x * 100;
        int Y = y * 10;
        if (X >= Y) {
            printf("CLOTH\n");
        }
        else {
            printf("DISPOSABLE\n");
        }
    }
    return 0;
}
