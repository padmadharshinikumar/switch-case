#include <stdio.h>

int main() {
    int a, b;

    scanf("%d", &a);  
    scanf("%d", &b);   

    switch (1) {
        case 1:
            if (a == 1 && b >= 700) {
                printf("Approved");
                break;
            }

        case 2:
            if (a == 1 && b >= 650 && b <= 699) {
                printf("Manual Review");
                break;
            }

        case 3:
            if (a == 1 && b < 650) {
                printf("Rejected");
                break;
            }

        case 4:
            if (a == 2 && b >= 700) {
                printf("Approved");
                break;
            }

        case 5:
            if (a == 2 && b < 700) {
                printf("Rejected");
                break;
            }
    }

    return 0;
}
