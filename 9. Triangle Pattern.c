/* To create the following pattern
                                        1
                                    2       3
                                4       5       6
                            7       8       9       10
                        11      12      13      14      15                */


#include <stdio.h>

int main()
{
   int row,tab,elem,temp,count,num;
   printf("Enter No of Rows: ");
   scanf("%d",&row);

   tab=row-1;elem=1;num=1;

   for(int i=1;i<=row;i++,tab--,elem++)
   {
       printf("\t\t\t\t");
       temp=tab;
       for(;temp>=1;temp--)
            printf("  ");

       for(count=1;count<=elem;num++,count++)
       {
            if(num<=9)
                printf("0%d  ",num);
            else
                 printf("%d  ",num);
       }

       temp=tab;
       for(;temp>=1;temp--)
            printf("  ");

       printf("\n");
   }

   system ("pause");
   return 0;
}
