#include <stdio.h>

int main() {
    int a, b;
    int c = 0;

    scanf("%d", &a);  
    scanf("%d", &b);   

    switch (a) {
        case 1:   // Economy
            c = b * 300;
            printf("Extra Baggage Charge ₹%d", c);
            break;

        case 2:   
            switch (1) {
                case 1:
                    if (b <= 3) {
                        printf("Free");
                        break;
                    }

                case 2:
                    if (b > 3) {
                        c = (b - 3) * 300;
                        printf("Extra Baggage Charge ₹%d", c);
                        break;
                    }
            }
            break;
    }

    return 0;
}