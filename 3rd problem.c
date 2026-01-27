#include <stdio.h>

int main() {
    int acc,bal,amount;

    scanf("%d %d %d",&acc,&bal,&amount);

    switch(acc){
        case 1:
        if(bal>=amount){
            printf("Transaction Successful");
        }
        break;
        case 2:
        if(bal>=amount && amount<5000){
            printf("Transaction Successful");
        
        }
        else {
            printf("Limit Exceeded");
        }
    }
    return 0;
}