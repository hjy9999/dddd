#include<stdio.h>

int Add(int num1, int num2)
{
    return num1+num2;
}
void ShowAddResult(int num)
{
    printf("덧셈결과 출력: %d \n", num);
}
int ReadNum(void)
{
    int num;
    scanf("%d", &num);
    return num;
}
void HowToUseThisProg(void)
{
    printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다. \n");
    printf("자 그럼 두개의 정수를 입력하세요. \n");
}
int main(void)
{
    HowToUseThisProg();
    ShowAddResult(Add(ReadNum(), ReadNum()));
    return 0;
}