#include<stdio.h>
int main()
{
    int n=128,n1,i=0,a[32];
    while(n>0)
    {
        n1=n%2;
        n=n/2;
        a[i]=n1;
        i++;
    }
    printf("%d\n",i);
    for(i=i-1;i>=0;i--)
        printf("%d",a[i]);
}
