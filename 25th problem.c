#include <stdio.h>

int main() {
    int category;
    int fee = 0;

    scanf("%d", &category);

    switch (category) {
        case 1:   // General
            fee = 1200;
            break;

        case 2:   // OBC
            fee = 800;
            break;

        case 3:   // SC/ST
            fee = 500;
            break;
    }

    printf("Exam Fee ₹%d", fee);
    return 0;
}
