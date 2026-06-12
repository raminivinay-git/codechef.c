#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int w, x, y, z;
        scanf("%d %d %d %d", & w, & x, & y, & z);
        y = x - y;
        printf("%d\n", w + (y * z));
    }
    return 0;
}
