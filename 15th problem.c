#include <stdio.h>

int main() {
    int a;
    char b;
    int c = 0;

    scanf("%d", &a);      // mode
    scanf(" %c", &b);     // category

    switch (a) {
        case 1:   // Online
            switch (b) {
                case 'R':
                case 'r':
                    c = 5000;
                    break;

                case 'S':
                case 's':
                    c = 3000;
                    break;
            }
            break;

        case 2:   // Offline
            switch (b) {
                case 'R':
                case 'r':
                    c = 9000;
                    break;

                case 'S':
                case 's':
                    c = 7000;
                    break;
            }
            break;
    }

    printf("₹%d", c);
    return 0;
}
