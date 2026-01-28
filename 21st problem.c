#include <stdio.h>

int main() {
    int a, b;
    int c = 0;

    scanf("%d", &a);   // seat type
    scanf("%d", &b);   // show time

    switch (a) {
        case 1:   // Silver
            c = 150;
            if (b >= 18)
                c = c + 50;
            break;

        case 2:   // Gold
            c = 250;
            if (b >= 18)
                c = c + 50;
            break;
    }

    printf("Ticket Price ₹%d", c);
    return 0;
}