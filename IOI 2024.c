#include <stdio.h>

int main() {
    int x;
    scanf("%d", & x);
    if (x >= 1 && x <= 8) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}
