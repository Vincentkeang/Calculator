#include <iostream>

int Addition();
int Subtraction();
int Division();
int Multiplication();

int main(int argc, const char * argv[])
{
    int num;
    
    printf("What would you like to do:\n1 addition\n2 Subtraction\n3 Division\n4 Multiplication\n");
    scanf("%d", &num);
    
    if(num == 1)
    {
        Addition();
    } else if(num == 2){
        Subtraction();
    } else if(num == 3){
        Division();
    } else if(num == 4){
        Multiplication();
    }
    return 0;
}
