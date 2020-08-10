#include <stdio.h>
void main() {
    int x = 0;
    for (;;) {
        if (x > 10) {
            break;
        }
        printf("%d\n", x);
        x += 1;
    }
}
