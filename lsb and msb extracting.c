#include<stdio.h>
int main()
{
    int n=57;
    printf("LSB is: %d\n",n&1);
    printf("MSB is: %d\n",(n>>7)&1);

}
