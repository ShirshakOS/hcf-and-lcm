#include<stdio.h>
int main()
{
    int a, b,i;
    printf("Number 1: ");
    scanf("%d",&a);
    printf("Number 2: ");
    scanf("%d",&b);
    int x=(a>b)?a:b;
    int y = (a<b)?a:b;
    int number;
    i=1;
    while(1)
    {
        number = x*i;
        if(number%y==0)// the first multiple of the larger number which is also divisable by the smaller number is the lcm
        {
            printf("The lcm is %d",number);
            break;
        }
        i++;
    }
    return 0;
}