#include<stdio.h>
int main()
{
    static int count=0;
    if(count!=50)
{
    printf("kIRAN\n");
    count++;
    main();
}
}
