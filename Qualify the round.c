#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int a, b, x;
        scanf("%d %d %d", & x, & a, & b);
        b = b * 2;
        int total = a + b;
        if (total >= x) {
            printf("Qualify\n");
        }
        else {
            printf("NotQualify\n");
        }
    }
    return 0;
}
