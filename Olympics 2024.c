#include <stdio.h>

int main() {
    int g, s, b;
    scanf("%d %d %d", & g, & s, & b);
    g = 5 - g;
    s = 5 - s;
    b = 5 - b;
    printf("%d\n", g + s + b);
    return 0;
}
