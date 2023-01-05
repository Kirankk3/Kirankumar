#include<stdio.h>
#include<math.h>
int main()
{
    int n1,count=0,i=0,p,sum=0;
    int n=1111;
    while(n!=0)
    {
        //n1=n%2;
        n1=n%10;
        n=n/10;
        p=pow(2,i)*n1;
        i++;
        sum=sum+p;
}
printf("%d",sum);
}
