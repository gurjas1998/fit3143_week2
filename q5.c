#include <stdio.h>
void main() {
    int i = 0;
    for (;;) {
        if (i < 3) {
            printf("i = %d is less than 3. Incrementing i\n", i);
        } else if (i == 3) {
            printf("i = 3 yay!\n");
        } else {
            printf("i is more than 3 now. Terminating program...\n");
            break;
        }
        i += 1;
    }
}
