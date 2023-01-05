#include<stdio.h>
int main()
{
    int value=0xAABBCCDD;
    int conv=0;
    conv |=((0x000000ff & value)<<24);
    conv |=((0x0000ff00 & value)<<8);
    conv |=((0x00ff0000 & value)>>8);
    conv |=((0xff000000 & value)>>24);
    printf("0x%x\n",conv);
}
