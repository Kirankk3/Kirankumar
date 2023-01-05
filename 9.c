#include<stdio.h>
int main()
{
    int a=0xAABBCCDD,b;
    b=0;
    b |=((0x000000ff & a)<<24);
    b |=((0x0000ff00 & a)<<8);
    b |=((0x00ff0000 & a)>>8);
    b |=((0xff000000 & a)>>24);
    printf("0x%x",b);
}
