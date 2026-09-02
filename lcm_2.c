#include<stdio.h>
int main()
{
    int a,b;
    printf("Number 1: ");
    scanf("%d",&a);
    printf("Number 2: ");
    scanf("%d",&b);
    int i;
    for( i=1;i<=100;i++)
    {
        if(i%a==0 && i%b==0)
        {
        printf("The lcm is %d",i);
        break;
        }
    }
    return 0;
}