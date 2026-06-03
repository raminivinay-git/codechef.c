#include <stdio.h>

int main() {
    int a, b, c, x;
    scanf("%d %d %d %d", & a, & b, & c, & x);
    int cuboid = a * b * c;
    int cube = x * x * x;
    if (cuboid > cube) {
        printf("CUBOID\n");
    }
    else if (cuboid < cube) {
        printf("CUBE\n");
    }
    else {
        printf("EQUAL\n");
    }
    return 0;
}
