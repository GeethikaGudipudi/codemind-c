
#include<stdio.h>
int main()
{
    int X,Y,total;
    scanf("%d%d",&X,&Y);
    total=(1*X)+(2*Y);
    if(X==0&&Y%2==0)
    printf("YES");
    else if(X==0&&Y%2!=0)
    printf("NO");
    else if(total%2==0)
    printf("YES");
    else
    printf("NO");
    
}
