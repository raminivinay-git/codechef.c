#include <stdio.h>

int main() {
    int t;
    scanf("%d", & t);

    while (t--) {
        int a;
        scanf("%d", & a);
        if (a % 2 == 0 && a % 7 == 0) {
            printf("ALICE\n");
        }
        else if (a % 2 != 0 && a % 9 == 0) {
            printf("BOB\n");
        }
        else {
            printf("CHARLIE\n");
        }
    }
    return 0;
}
