#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n, x, y;
        int count = 0;
        scanf("%d %d %d", & n, & x, & y);
        while (n--) {
            int a;
            scanf("%d", & a);
            if (a >= x && a <= y) {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
