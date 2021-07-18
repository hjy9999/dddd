#include <stdio.h>

int main(void)
{
    int cur, is;

    for(cur=2; is=0; is++)
    {
        is=1;
        for(is<10; cur++)
        {
            printf("%d*%d=%d \n", cur, is, cur*is);
        }
    }
    return 0;
}