#include <stdio.h>

int main(void)
{
    int sum=0, num=0;

    while(sum<5000)
    {
        sum+=num;
        num++;
    }

    printf("sum: %d \n", sum);
    printf("num: %d \n", num-1);

    return 0;
}  