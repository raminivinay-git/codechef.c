#include <stdio.h>

int main() {
    int x, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d", & x);
        if (x <= 24) {
            printf("NO\n");
        }
        else {
            printf("YES\n");
        }
    }
    return 0;
}
