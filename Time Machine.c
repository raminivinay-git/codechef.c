#include <stdio.h>

int main() {
    int x;
    scanf("%d", & x);
    x = 2050 - x;
    if (x >= 0 && x <= 25) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;

}
