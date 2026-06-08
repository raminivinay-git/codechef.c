#include <stdio.h>

int main() {
    int x, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d", & x);
        if (x < 4) {
            printf("MILD\n");
        }
        else if (x >= 4 && x < 7) {
            printf("MEDIUM\n");
        }
        else {
            printf("HOT\n");
        }
    }
    return 0;
}
