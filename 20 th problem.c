
#include <stdio.h>

int main() {
    int a, b;

    scanf("%d", &a);   // role
    scanf("%d", &b);   // login time (hour)

    switch (a) {
        case 1:   // Admin
            printf("Full Access");
            break;

        case 2:   // Employee
            if (b >= 9 && b <= 18)
                printf("Limited Access");
            else
                printf("Access Denied");
            break;
    }

    return 0;
}