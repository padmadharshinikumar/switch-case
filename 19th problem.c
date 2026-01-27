#include <stdio.h>

int main() {
    int a, b;

    scanf("%d", &a);   // category
    scanf("%d", &b);   // distance

    switch (a) {
        case 1:   // Student
            if (b <= 30)
                printf("Eligible");
            else
                printf("Eligible with Extra Fee");
            break;

        case 2:   // Employee
            if (b <= 30)
                printf("Eligible");
            else
                printf("Not Eligible");
            break;

        default:
            printf("Eligible");
    }

    return 0;
}
