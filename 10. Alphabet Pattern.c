/* To print the below pattern
        A B C D E F G F E D C B A
        A B C D E F   F E D C B A
        A B C D E       E D C B A
        A B C D           D C B A
        A B C               C B A
        A B                   B A
        A                       A
                                        */

#include <stdio.h>

int main()
{
    int row;int space=3;
    printf("Enter no of Row: ");
    scanf("%d",&row);
    printf("\n\n");
    for (int i=row;i>=1;i--)
    {
        printf("\t\t\t\t");
        char ch='A';
        for (int j=1;j<=i;j++,ch++)
            printf("%c ",ch);

        if (i==row)
        {
            ch-=2;
            for (int j=i-1;j>=1;j--,ch--)
                printf("%c ",ch);
        }

        else
        {
             ch-=1;
             for(int j=space;j>1;j--)
                printf(" ");

             for (int j=i;j>=1;j--,ch--)
                printf("%c ",ch);

             space+=4;
        }

        printf("\n");
    }
    printf("\n\n");

    system ("pause");
    return 0;
}
