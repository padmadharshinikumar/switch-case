#include <stdio.h>

int main() {
    int a, b;

    scanf("%d", &a);   // marks
    scanf("%d", &b);   // attendance

    switch (1) {
        case 1:
            if (b < 75) {
                printf("Fail");
                break;
            }

        case 2:
            if (a >= 75) {
                printf("Distinction");
                break;
            }

        case 3:
            if (a >= 50 && a <= 74) {
                printf("Pass");
                break;
            }

        case 4:
            if (a < 50) {
                printf("Fail");
                break;
            }
    }

    return 0;
}