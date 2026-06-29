#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);

    while (t--) {
        int n, x;
        scanf("%d %d", & n, & x);
        int num = n * x;
        if (num <= 99999 && num >= 10000) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
