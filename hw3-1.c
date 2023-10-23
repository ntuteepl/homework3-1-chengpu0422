#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    scanf("%d",&n);

    for ( m=2;m<n;m++)
    {
     if((n%m)==0)
        {
        printf("NO");
        break;
        }
    }
    if((n==m))
        {
            printf("YES");


        }
    }



