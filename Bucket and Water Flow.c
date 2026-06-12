#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int w, x, y, z;
        scanf("%d %d %d %d", & w, & x, & y, & z);
        if (w + (y * z) > x) {
            printf("OVERFLOW\n");
        }
        else if (w + (y * z) == x) {
            printf("FILLED\n");
        }
        else {
            printf("UNFILLED\n");
        }
    }
    return 0;
}
