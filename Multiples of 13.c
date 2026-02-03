#include <stdio.h>
int main() {
    int x, y, temp;
    int total = 0;
        scanf("%d", &x);
    scanf("%d", &y);
        if (x > y) {
        temp = x;
        x = y;
        y = temp;
    }
        for (int num = x; num <= y; num++) {
        if (num % 13 != 0) {
            total += num;
        }
    }
        printf("%d\n", total);
    return 0;
}
