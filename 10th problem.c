#include <stdio.h>

int main() {
    int a, b;
    int c = 0, d = 0;

    scanf("%d", &a);
    scanf("%d", &b);

    switch (1) {
        case 1:
            if (a == 1)
                c = 50000;

        case 2:
            if (a == 2)
                c = 35000;

        case 3:
            if (b >= 3)
                d = b * 5000;
            break;
    }

    printf("Salary ₹%d", c + d);
    return 0;
}
