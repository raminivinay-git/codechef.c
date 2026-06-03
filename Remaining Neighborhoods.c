#include <stdio.h>

int main() {
    int n;
    scanf("%d", & n);
    if (n == 100) {
        printf("0\n");
    }
    else {
        printf("%d\n", 100 - n);
    }
    return 0;

}
