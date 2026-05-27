#include <stdio.h>

int main() {
    int h;
    scanf("%d", & h);
    if (h == 8) {
        printf("PERFECT");
    }
    else if (h > 8) {
        printf("MORE");
    }
    else {
        printf("LESS");
    }
    return 0;
}
