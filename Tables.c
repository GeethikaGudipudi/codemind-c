
#include<stdio.h>
int main()
{
    int n,i,R;
    scanf("%d%d",&n,&R);
    for(i=1;i<=R;i++)
    {
        if(i%2!=0)
        printf("%d x %d = %d
",n,i,n*i);
    }
    
    return 0;
}
