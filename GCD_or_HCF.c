
#include<stdio.h>
int main()
{
    int M,N,GCD,i;
    scanf("%d%d",&M,&N);
    for(i=1;i<=M&&i<=N;i++)
    {
        if(M%i==0&&N%i==0)
        {
            GCD=i;
        }
    }
        printf("%d",GCD);
        return 0;
    
    
}
