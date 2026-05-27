#include <stdio.h>

int main() {
    int x;
    scanf("%d", & x);
    switch (x) {
        case 1:
            printf("8000");
            break;
        case 2:
            printf("4000");
            break;
        case 3:
            printf("2000");
            break;
        case 4:
            printf("1000");
    }
    return 0;
}
