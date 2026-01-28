#include <stdio.h>

int main() {
    int callType, minutes;
    int charge = 0;

    scanf("%d", &callType);
    scanf("%d", &minutes);

    switch (callType) {
        case 1:   // Local
            charge = minutes * 1;
            break;

        case 2:   // STD
            charge = minutes * 3;
            break;

        case 3:   // ISD
            charge = minutes * 10;
            break;
    }

    printf("Call Charge ₹%d", charge);
    return 0;
}
