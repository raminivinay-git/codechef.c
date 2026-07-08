#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int i, x, y;
        int count = 0;
        scanf("%d %d", & x, & y);
        for (i = x; i > y; i--) {
            count = count + ((i + 9)) / 10;
        }
        printf("%d\n", count);
    }
    return 0;
}
