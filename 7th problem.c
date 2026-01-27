#include <stdio.h>

int main() {
    int a, b;
    int c = 0;

    scanf("%d", &a);
    scanf("%d", &b);

    switch (1) {
        case 1:
            if (a == 1) {
                c = 4;
                break;
            }

        case 2:
            if (a == 2 && b <= 3) {
                c = 5;
                break;
            }

        case 3:
            if (a == 2 && b > 3) {
                c = 7;
                break;
            }
    }

    printf("Interest %d", c);
    return 0;
}
