#include<stdio.h>
int Add(int num1, int num2)
{
    return num1+num2;
}

int main(void)
{
    printf("덧셈 결과1: %d \n", Add(3, 4));
    printf("덧셈 결과2: %d \n", Add(5, 8));
    return 0;
}