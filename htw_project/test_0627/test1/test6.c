#include <stdio.h>

int main (void)
{
    int num;

    printf("1.개 2.고양이 3.병아리 \n");
    printf("선택? ");
    scanf("%d", &num);

    if(num==1)
    printf("dog \n");

    else if(num==2)
    printf("cat \n");

    else if(num==3)
    printf("chick \n");
    else if(num>3)
    printf("I don't know \n");

    return 0;
}