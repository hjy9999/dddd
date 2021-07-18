#include "abs.h"
int pr_test()
{
    return 0;
}
int AbsoCompare(int num1, int num2)
{
    if(GetAbsoValue(num1) > GetAbsoValue(num2))
       return num1;
    else
       return num2;
}
int GetAbsoValue(int num)
{
    if(num<0)
       return num * (-1);
    else
       return num;
}
