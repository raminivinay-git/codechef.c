#include<stdio.h>

int main() {
    int x;
    scanf("%d", & x);
    int digit = x % 10;
    int num = x / 10;
    if (digit == num) {
        printf("NO\n");
    }
    else {
        printf("YES\n");
    }
    return 0;
}
