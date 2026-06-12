#include <stdio.h>

int main() {
    int x, y, z, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d %d %d", & x, & y, & z);
        int count = 0;
        if (x >= 50) count++;
        if (y >= 50) count++;
        if (z >= 50) count++;

        if (count >= 2) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
