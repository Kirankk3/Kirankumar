#include<stdio.h>
#include<math.h>
int main()
{
    int i,i1,n1,n=100;
    for(i=1;i<=1000;i++)
    {
    int temp=i1=n1=i,count=0,sum=0,r;
     while(n1!=0)
    {
        n1=n1/10;
        count++;
    }

    while(i1!=0)
    {
         r=i1%10;
        sum=sum+pow(r,count);
        i1=i1/10;
    }
    if(temp==sum)
    {
        printf("%d\n",sum);
    }

}
}

