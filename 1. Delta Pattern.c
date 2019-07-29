/* To print the below pattern
           *
          ***
         *****
        *******          */



#include <stdio.h>
#include <string.h>

int main()
{

    int n;
    printf("Enter No of Rows: ");
    scanf("%d",&n);
    int i=n-1;
    int l=1;
    for (;i>=0;i--,l=l+2)
    {
        for (int j=0;j<=30;j++)
                printf(" ");

        for (int j=0;j<i;j++)
            printf(" ");

        for (int k=1;k<=l;k++)
            printf("*");

        for (int j=0;j<i;j++)
            printf(" ");

        printf("\n");
    }

    system ("pause");
    return 0;
}
