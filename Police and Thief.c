#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int x, y;
        scanf("%d %d", & x, & y);
        int sec = abs(x - y);
        printf("%d\n", sec);
    }
    return 0;
}
