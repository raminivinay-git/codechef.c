#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", & x, & y);
    y = y * 10;
    if (x + y >= 100) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;

}
