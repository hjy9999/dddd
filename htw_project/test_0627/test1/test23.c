#include <stdio.h>
void kkd(int num1, int num2);

int main()
{
    int num1, num2;

    printf("두 개의 정수를 입력? \n");
    scanf("%d %d", &num1, &num2);
    if(num1<=num2){
        kkd(num1, num2);
    }
    else{
        kkd(num1, num2);
    }

    return 0;
}

void kkd(int num1, int num2)
{
    for(int i = num1; i<= num2; i++)
    {
        printf("==========%d단==========\n",i);
        for(int j = 1; j<=9; j++)
        {
            printf("%d * %d = %d \r\n", i, j, i*j);
        }
    }
}