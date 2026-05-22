#include <stdio.h>

int main() {
    int x;
    scanf("%d", & x);
    if (x == 24) {
        printf("1");
    }
    else if (x < 25) {
        printf("%d", 25 - x);
    }
    else {
        printf("0");
    }
    return 0;
}
