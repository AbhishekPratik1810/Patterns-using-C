/* To print the below pattern

        *     *
         *   *
          * *
           *
          * *
         *   *
        *     *               */



#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    printf("Enter Odd Number of Rows: ");
    scanf("%d",&n);

    while (n%2==0)
    {
        printf("You just entered an Even Number . Please Enter an Odd Number: ");
        scanf("%d",&n);
    }

    int i; int j; int k; int m; int q=1;
    int l= (n-1)/2; int p= n-2; int r=l-1;

    for (i=0;i<n;i++)
    {
        for (j=0;j<=30;j++)
                printf(" ");

        if (i<=l)
        {
            for(j=0,k=0;j<=l&&k<=i;j++,k++)
            {
                if (j!=0)
                    printf(" ");
                //printf("%dth Row. Value of j and k are %d and %d\n",i+1,j,k);
            }

            printf("*");

            for (m=p;m>=1;m=m-1)
                printf(" ");
            p=p-2;
        }

        if (i<l)
            printf("*");

        if (i>l)
        {
            for (j=r;j>=1;j--)
                printf(" ");
            printf("*");
            r=r-1;

            for (j=1;j<=q;j++)
                printf(" ");
            printf("*");
            q=q+2;

        }


        printf("\n");

    }

    system ("pause");
    return 0;
}
