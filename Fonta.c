#include <stdio.h>

int main() {
    char arr[5];
    int a;
    scanf("%s", & arr);
    if (arr[2] == 'n' && arr[3] == 't' && arr[4] == 'a') {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}
