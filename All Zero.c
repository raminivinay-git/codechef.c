#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int a, b, c;
        scanf("%d %d %d", & a, & b, & c);
        if (b == ((2 * a) + (c / 3)) && c % 3 == 0) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
