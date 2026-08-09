#include <stdio.h>

int main() {
    int n, temp;
    scanf("%d", & n);
    int sec = n * 30;
    if (sec >= 600) {
        printf("0\n");
    }
    else {
        temp = 600 - sec;
        printf("%d\n", temp / 30);
    }
    return 0;
}
