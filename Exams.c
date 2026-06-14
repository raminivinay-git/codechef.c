#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int x, y, z;
        scanf("%d %d %d", & x, & y, & z);
        int total = x * y;
        if (z > total / 2) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
