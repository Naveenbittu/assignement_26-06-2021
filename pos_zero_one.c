/**Write a program as a Macro will take two arguments. It should return the position 1 or 0.**/
#include<stdio.h>
#define num 0x12345678
#define pos 3
int main()
{
    printf("0x%x\n",num);
    if(num&(1<<pos))
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}

#if 0
0x12345678
1
#endif // 0
