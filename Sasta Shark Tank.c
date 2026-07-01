#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);

    while (t--) {
        int a, b;
        scanf("%d %d", & a, & b);
        a = (a * 100) / 10;
        b = (b * 100) / 20;

        if (a > b) {
            printf("FIRST\n");
        }
        else if (a < b) {
            printf("SECOND\n");
        }
        else {
            printf("ANY\n");
        }
    }
    return 0;
}
