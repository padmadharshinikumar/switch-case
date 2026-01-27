#include <stdio.h>

int main() {
    int a, b;
    int c = 0;

    scanf("%d", &a);   
    scanf("%d", &b);   

    switch (1) {
        case 1:
            if (a == 1 && b <= 5) {
                c = 1500;
                break;
            }

        case 2:
            if (a == 1 && b > 5) {
                c = 2500;
                break;
            }

        case 3:
            if (a == 2 && b <= 5) {
                c = 4000;
                break;
            }

        case 4:
            if (a == 2 && b > 5) {
                c = 6000;
                break;
            }
    }

    printf("₹%d", c);
    return 0;
}







