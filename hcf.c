#include<stdio.h>
int getfactorcount(int b)
{
    int count =0;
    for(int i=1;i<=b;i++)
    {
        if(b%i==0)
        count++;
    }
    return count;
}
void getfactors(int a[],int number,int range)
{
    int i,j=0;
    for(i=1;i<=number;i++)
    {
        if(number%i==0)
        a[j++]=i;
    }
}
void printfactors(int factors[], int range, int number)
{
    int i;
    printf("\nThe factors of %d are: ",number);
    for(i=0;i<range;i++)
    {
        printf("%d\t",factors[i]);
    }
}
void gethcf(int afactor[], int bfactor[], int rangea, int rangeb)
{
    int i,j,hcf;
    for(i=0;i<rangea;i++)
    {
        for(j=0;j<rangeb;j++)
        {
            if(afactor[i] == bfactor[j])
            {
                hcf = afactor[i];
            }
        }
    }
    printf("\nThe HCF is %d",hcf);
}
int main()
{
    int a, b;
    printf("Number 1: ");
    scanf("%d",&a);
    printf("Number 2: ");
    scanf("%d",&b);
    int a_factor_count, b_factor_count;
    a_factor_count = getfactorcount(a);
    b_factor_count = getfactorcount(b);
    int a_factors[a_factor_count],b_factors[b_factor_count];
    getfactors(a_factors,a,a_factor_count);
    getfactors(b_factors, b,b_factor_count);
    printfactors(a_factors,a_factor_count,a);
    printfactors(b_factors,b_factor_count,b);
    gethcf(a_factors, b_factors,a_factor_count, b_factor_count);
    return 0;
}   