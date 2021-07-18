#include <stdio.h>

int main(void)
{
    int num1, num2;
    char symbol;


    while(1)
    {
        scanf("%c",&symbol);
        
        switch(symbol)
        {
            case '+':
                scanf("%d %d", &num1, &num2);
                printf("%d \n", num1+num2);
                break;
            case '-':
                scanf("%d %d", &num1, &num2);
                printf("%d \n", num1-num2);
                break;
            case '*':
                scanf("%d %d", &num1, &num2);
                printf("%d \n", num1*num2);
                break;
            case '/':
                scanf("%d %d", &num1, &num2);
                printf("%d \n",num1 / num2);
                break;
            case 'q':
                printf("계산기를 종료합니다. \n");
                exit(0);
                break;
        }
    }
    return 0;
}