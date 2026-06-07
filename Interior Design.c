#include <stdio.h>

int main() {
    int x1, x2, y1, y2, t;
    scanf("%d", & t);
    while (t--) {
        scanf("%d %d %d %d", & x1, & y1, & x2, & y2);
        int style_1 = x1 + y1;
        int style_2 = x2 + y2;
        if (style_1 > style_2) {
            printf("%d\n", style_2);
        }
        else {
            printf("%d\n", style_1);
        }
    }
    return 0;
}
