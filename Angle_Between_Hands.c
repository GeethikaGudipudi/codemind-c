
#include<stdio.h>
#include<math.h>
int main()
{
    int H,M;
    float A;
    scanf("%d:%d",&H,&M);
     A=abs((H*30)-(M*11/2.0));
     if(A<(360-A))
     {
         if(A>(int)A)
         printf("%.1f",A);
         else
         printf("%d",(int)A);
     }
     else
     {
         if(360-A>(int)(360-A))
         printf("%.1f",360-A);
         else
         printf("%d",(int)(360-A));
     }
    
    
}
