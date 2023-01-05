#include<stdio.h>
void fun(int,int);
void main()
{
    int x=4,y=3;
    fun(x,y);
    printf("%d,%d\n",x,y);
}
void fun(int x,int y)
{
    x=20;
    y=40;
    printf("%d,%d\n",x,y);
}
