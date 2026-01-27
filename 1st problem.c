#include <stdio.h>

int main() {
    int n,p;
    int bill=0;
    scanf("%d %d",&n,&p);
    switch(n){
        case 1:
        if(p<=100){
            bill=p*3;
            printf("%d",bill);
        }
        else if(p>100){
            p=p-100;
            bill=(300+(p*5));
            printf("%d",bill-80);
        }
        break;
        case 2:
        if(p<=100){
            bill=(bill*7);
            printf("%d",bill);
        }
        else if(p>100){
            p=p-100;
            bill=(700+(p*10));
            printf("%d",bill);
        }
    }
    return 0;
}