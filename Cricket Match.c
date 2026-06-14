#include <stdio.h>

int main() {
    int n, m, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d %d", & n, & m);
        int balls = m * 6;
        if (balls * 6 >= n) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
