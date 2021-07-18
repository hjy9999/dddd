#include <stdio.h>

int main (void)

{
  int total, num;
  
  do
  {
    printf("정수 입력(0 to quit) ");
    scanf("%d", &num);
    total += num;

  }while(total=0, num=0, num!=0);
  printf("합계: %d \n", total);

  return 0;
}