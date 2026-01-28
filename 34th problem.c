#include <stdio.h>

int main() {
    int a;
    int c = 0;

    scanf("%d", &a);

    switch (1) {
        case 1:
            if (a == 1) {
                c = 40;
                break;
            }

        case 2:
            if (a == 2) {
                c = 100;
                break;
            }

        case 3:
            if (a == 3) {
                c = 300;
                break;
            }
    }

    printf("Speed %d Mbps", c);
    return 0;
}
