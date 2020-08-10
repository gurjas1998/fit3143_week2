#include <stdio.h>
void main() {
    for (int i = 1; i <= 10; i++) {
        printf("%d \n",i);
    }
    
    /* infinite for loop */
    int x = 1;
    for (;;){
        if (x>10){
        break;}
        printf("%d \n",x);
        x+=1;
        }
}
