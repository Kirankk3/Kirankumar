#include<stdio.h>
int main()
{
    int byte=0xEF,a,b;
    a=(byte>>5)&1;
    b=(byte>>7)&1;
    printf("%d\n",a);
    printf("%d",b);
   // return 0;

}
