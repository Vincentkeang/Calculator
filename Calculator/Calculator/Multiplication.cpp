#include <stdio.h>

int main();

int Multiplication() {
    int num1;
    int num2;
    int Total;
    int yesNO;
    
    printf("You choose Multiplication!\n");
    printf("What are the two numbers you want to multiply?\n");
    printf("Number 1: ");
    scanf("%d", &num1);
    printf("Number 2: ");
    scanf("%d", &num2);
    
    Total = num1 * num2;
    printf("%d\n", Total);
    
    printf("Do you need more Calculations? 1. Yes  2.No\n");
    scanf("%d", &yesNO);
    if(yesNO == 1) {
    main();
    } else if(yesNO == 2) {
        return 0;
    }
    return 0;
}
