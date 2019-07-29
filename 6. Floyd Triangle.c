/* Sample Floyd Triangle
   Say No of Rows is 7
   1
   2 3
   4 5 6
   7 8 9 10
   11 12 13 14 15
   16 17 18 19 20 21
   22 23 24 25 26 27 28
   This Code Generates a Floyd Triangle By Taking The No of Rows as Input from the user */

#include <stdio.h>

int main()
{
    int row;
    printf("Enter No of Rows: ");
    scanf("%d",&row);

    int k=1; int i; int j=1;

    while((k-1)!=row)
    {
        i=1;
        for (;i<=k;i++,j++)
        {
            if (j<=9)
                printf("0%d ",j);
            else
                printf("%d ",j);
        }
        printf("\n");
        k++;
    }

    system ("pause");
    return 0;
}
