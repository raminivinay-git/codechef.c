#include <stdio.h>

int main() {
    int x, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d", & x);
        if (x >= 67 && x <= 45000) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
