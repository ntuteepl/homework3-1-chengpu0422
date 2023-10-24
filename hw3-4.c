#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a1,a2,b1,b2,c1,c2,d1,d2,e1,e2,A,B;
  scanf("%d",&a1);
  for(int x=0;x<2;x++)
  {
      x=0;
      scanf("%d",&a2);
      if(a2==0)
      {
          break;
      }
      A=0;
      B=0;
      e1=a1;
      e2=a2;
      for(int i=0;i<4;i++)
        {
        b1=e1%10;
        b2=e2%10;
        if(b1==b2)
        {
            A++;
        }
        else
        {
            d1=a1;
            d2=a2;
            for(int j=0;j<4;j++)
            {
                c1=d1%10;
                c2=d2%10;
            }
            if(c1==b2)
                {
                B++;
                }
            d1/=10;
            d2/=10;
        }
        e1/=10;
        e2/=10;
        }
        printf("%dA%dB",A,B);
  }
}

