#include <stdio.h>

int main() {
    int a, b;
    int c = 0;

    scanf("%d", &a);   
    scanf("%d", &b);   

    switch (a) {
        case 1:   // Domestic
            if (b <= 30)
                c = b * 5;
            else
                c = (30 * 5) + ((b - 30) * 8);
            break;

        case 2:   // Commercial
            c = b * 10;
            break;
    }

    printf("Bill ₹%d", c);
    return 0;
}
