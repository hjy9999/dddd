#include <stdio.h>

int main(void)
{
    int num1, num2;
    printf("정수 입력: ");
    scanf("%d %d", &num1, &num2);
    if(num1<num2)
    printf(" \n");
    else
    printf("입력 값은 0보다 작지 않다. \n");
    return 0;
}