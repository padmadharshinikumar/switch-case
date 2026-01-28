#include <stdio.h>

int main() {
    int a;
    int c = 0;

    scanf("%d", &a);

    switch (1) {
        case 1:
            if (a == 1) {
                c = 80000;
                break;
            }

        case 2:
            if (a == 2) {
                c = 60000;
                break;
            }

        case 3:
            if (a == 3) {
                c = 45000;
                break;
            }
    }

    printf("Hostel Fee ₹%d", c);
    return 0;
}
