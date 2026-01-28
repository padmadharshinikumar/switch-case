#include <stdio.h>

int main() {
    int a;

    scanf("%d", &a);

    switch (1) {
        case 1:
            if (a <= 1) {
                printf("Short Interruption");
                break;
            }

        case 2:
            if (a <= 4) {
                printf("Medium Interruption");
                break;
            }

        case 3:
            if (a > 4) {
                printf("Long Interruption");
                break;
            }
    }

    return 0;
}
