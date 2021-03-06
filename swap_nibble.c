
/**2. Write a program to Swap the nibble in a byte without using bitwise operator.**/


#include <stdio.h>

typedef union byte
{
    unsigned char bit:1;
}byte_t;

byte_t bits[8];

void find_binary(int decimal_number)
{
    static int index = 6;
    if (decimal_number == 0){
        return;
    }
    else{
        find_binary(decimal_number/2);
        bits[index].bit = decimal_number%2;
        index--;
    }
}

void swap_nibble(int index1,int index2)
{
    if(((index1 > 6) || (index2 > 6)) || ((index1 < 0) || (index2 < 0)))
    {
        printf("Invalid index for swapping \n");
        return;
    }
    int temp =  bits[index1].bit;
    bits[index1].bit = bits[index2].bit;
    bits[index2].bit = temp;
}

int main()
{
    char ch = 'G';
    printf("ASCII value of char is %d\n",ch);
    find_binary(ch);
    for(int i=7;i>-1;i--){
        printf("%d ",bits[i].bit);
    }

    swap_nibble(1,4);
    for(int i=7;i>-1;i--){
        printf("%d ",bits[i].bit);
    }
    return 0;
}
#if 0
ASCII value of char is 71
0 1 0 0 0 1 1 1 0 1 0 1 0 1 0 1
#endif // 0
