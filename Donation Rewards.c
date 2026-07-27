#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);
    while (t--) {
        int x;
        scanf("%d", & x);
        if (x <= 3) {
            printf("BRONZE\n");
        }
        else if (x > 3 && x <= 6) {
            printf("SILVER\n");
        }
        else if (x > 6) {
            printf("GOLD\n");
        }
    }
    return 0;
}
