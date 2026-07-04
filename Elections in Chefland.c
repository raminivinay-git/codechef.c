#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n, x;
        int count = 0;
        scanf("%d%d", & n, & x);

        while (n--) {
            int a;
            scanf("%d", & a);
            if (a >= x)
                count++;

        }
        printf("%d\n", count);
    }
    return 0;
}
