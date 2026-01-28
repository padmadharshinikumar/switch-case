#include <stdio.h>

int main() {
    int a, b;
    int c = 0;

    scanf("%d", &a);   // customer type
    scanf("%d", &b);   // bill amount

    switch (a) {
        case 1:   // Regular
            c = b - (b * 5 / 100);
            break;

        case 2:   // Premium
            c = b - (b * 15 / 100);
            break;
    }

    printf("Pay ₹%d", c);
    return 0;
}
