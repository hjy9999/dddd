#include <stdio.h>

int main(void)
{
    int num = 1;

    while(num !=0)
    {
        printf(" 줄의 개수를 입력하세요!!");
        scanf("%d", &num);
        printf("%d만큼 출력합니다.\r\n", num);

        for(int count = 0; count< num ; count++)//0 1 2
        {
            for(int sub_count = 1; sub_count < (num-count); sub_count++)//1, 2 => 2 => x
            {
                printf(" ");
            }
            for(int sub_count = 0; sub_count < (count*2)+1; sub_count++)
            {
                printf("*");
            }
            printf("\r\n");
        }
        
    }

 return 0;

}