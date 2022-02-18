#include<stdio.h>
int main()
{
    int l,b,w,c,f_area,tot_cost;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    if(w+w>=l||w+w>=b)
    {
    f_area=((l+2*w)*(b+2*w)-(l*b));
    tot_cost=f_area*c;
    printf("%d",tot_cost);
    }
    return 0;
}