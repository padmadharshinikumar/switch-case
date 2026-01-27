#include <stdio.h>

int main() {
    int a, b;
    int c = 0;

    scanf("%d", &a);   
    scanf("%d", &b);   

    switch (1) {
        case 1:
            if (a == 1 && b == 1) {
                c = 100;
                break;
            }

        case 2:
            if (a == 1 && b >= 2 && b <= 30) {
                c = 800;
                break;
            }

        case 3:
            if (a == 2) {
                c = b * 240;
                break;
            }
    }

    printf("₹%d", c);
    return 0;
}



