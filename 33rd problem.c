#include <stdio.h>

int main() {
    int a, b;
    int c = 0;

    scanf("%d", &a);
    scanf("%d", &b);

    switch (1) {
        case 1:
            if (a == 1) {
                c = b * 2;
                break;
            }

        case 2:
            if (a == 2) {
                c = b * 5;
                break;
            }
    }

    printf("Late Fee ₹%d", c);
    return 0;
}
