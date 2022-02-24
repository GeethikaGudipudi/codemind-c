
#include<stdio.h>
int main()
{
    int n,rem,sum=0,product=1,diff;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        product=product*rem;
        n=n/10;
    }
    diff=product-sum;
    printf("%d",diff);
}
    
