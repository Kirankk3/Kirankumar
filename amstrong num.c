#include<stdio.h>
#include<math.h>
int main()
{
    int n,n1,count=0,sum=0,r;
    printf("enter the number");
    scanf("%d",&n);
    int temp=n1=n;
     do
    {
        n1=n1/10;
        count++;
    }while(n1!=0);
    printf("%d\n",count);

    while(n!=0)
    {
         r=n%10;
        sum=sum+pow(r,count);
        n=n/10;
    }
    if(temp==sum)
    {
        printf("amstrong num");
    }
    else{
       printf(" not amstrong num");
    }
}
