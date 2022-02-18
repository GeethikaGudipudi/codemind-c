#include<stdio.h>
int main()
{
    int L,B,W,c,area,Tot_cost;
    scanf("%d%d%d%d",&L,&B,&W,&c);
    
    if(L<=W+W || W+W>=B)
    {
        printf("Impossible");
    }
    else
    {
        area=(L*B)-((L-2*W)*(B-2*W));
        Tot_cost=area*c;
        
        
        printf("%d",Tot_cost);
    }
    return 0;
    
    
    
}