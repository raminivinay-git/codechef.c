#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int n;
        scanf("%d", & n);
        if (n <= 4) {
            printf("1\n");
        }
        else {
            printf("%d\n", (n + 3) / 4);
        }
    }
    return 0;
}
