#include<stdio.h>
int main()
{
    int a[3][3]={1,2,3,2,4,5,6,5,7};
    int i,j,a1[3][3];

//    for(i=0;i<3;i++)
//    {
//        for(j=0;j<3;j++)
//        {
//            printf("%d",a[i][j]);
//        }
//    }

        for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i]==a[j])
            {
                a1[i][j]=a[i][j+1];
               a1[3][3]=a[i][j];
            } printf("%d",a[i]);
        }
    }
}
