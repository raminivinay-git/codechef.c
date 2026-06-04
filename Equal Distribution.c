#include <stdio.h>

int main() {
    int a, b, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d %d", & a, & b);
        int total = a + b;
        if (total % 2 == 0) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
