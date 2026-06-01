#include <stdio.h>

int main() {
    int x, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d", & x);
        if (x * 4 <= 1000) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
