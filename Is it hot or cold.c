#include <stdio.h>

int main() {
    int c, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d", & c);
        if (c > 20) {
            printf("HOT\n");
        }
        else {
            printf("COLD\n");
        }
    }
    return 0;
}
