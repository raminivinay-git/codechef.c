#include <stdio.h>

int main() {
    int x, y, z;
    scanf("%d %d %d", & x, & y, & z);
    float t = x + y / 2.0;
    if (x + y + z - t < 2) {
        printf("Yes\n");
    }
    else {

        printf("no\n");
    }
    return (0);
}
