#include <stdio.h>

int main() {
    int a;
    int c = 0;

    scanf("%d", &a);

    switch (1) {
        case 1:
            if (a == 1) {
                c = 500;
                break;
            }

        case 2:
            if (a == 2) {
                c = 1200;
                break;
            }
    }

    printf("Consultation Fee ₹%d", c);
    return 0;
}
