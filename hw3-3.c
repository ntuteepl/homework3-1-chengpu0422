#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j;
   scanf("%d%d",&i,&j);
   int o,p,q,r,s;
   o=i/1000;
   p=(i%1000)/100;
   q=((i%1000)%100)/10;
   r= ((i%1000)%100)%10;
   s=o+p+q+r;
   int t,u,v,w,x;
   t=j/1000;
   u=(j%1000)/100;
   v=((j%1000)%100)/10;
   w= ((j%1000)%100)%10;
   x=t+u+v+w;
   if(s>x)
   {
       printf("%d\n",j);
   }
   if(x>s)
   {
       printf("%d\n",i);

   }
    else if(s==x)
       {
           if(i>j)
           {
             printf("%d\n",j);
           }
           if(i<j)
           {
             printf("%d\n",i);
           }
       }

}

