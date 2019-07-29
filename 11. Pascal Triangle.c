/* To create the fibonacci triangle/pascal triangle as shown below
                                            1
                                        1       1
                                    1       2       1
                                1       3       3       1
                            1       4       6       4       1
    Logic Used: 2 Arrays are taken. one stores the numbers for the ith row(arr1) and other for i+1th row(arr2) using the help of arr1. The contents of arr1 is printed
                and then arr1 is being overwritten by numbers of arr2 so that in next turn arr1 again stores the numbers of the corresponding new ith row. */

#include <stdio.h>
#define MAX 1000
int main()
{
    int row,mid,tab,temp,num;
    printf("Enter no of Rows: ");
    scanf("%d",&row);

    tab=row-1;

    int arr1[MAX],arr2[MAX];

    for (int i=1;i<=row;i++,tab--)
    {
        printf("\t\t\t\t");
        temp=tab;

        arr1[0]=1; arr1[i-1]=1;

        for(;temp>=1;temp--)
            printf("  ");

        if (i==1)
            printf("1  ");

        else
        {
            arr2[0]=1; arr2[i]=1;
            int l=0,m=1;
            for (int j=1;j<i;j++)
            {

                arr2[j]=arr1[l]+arr1[m];
                l++,m++;
            }

            for(int j=0;j<i;j++)
                {
                    if(j==0)
                        printf("%d  ",arr1[j]);
                    else
                        printf(" %d  ",arr1[j]);
                }
            for (int j=0;j<=i;j++)
                arr1[j]=arr2[j];
        }
        printf("\n");

    }
    system ("pause");
    return 0;
}
