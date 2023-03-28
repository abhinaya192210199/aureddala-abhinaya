#include<stdio.h>
int main()
{
    int num1,num2,i,j,count;
    scanf("%d%d",&num1,&num2);
     printf("prime Numbers are:\n");
    for(i=num1;i<=num2;i++)
    {
        count=0;
        for (j=1;j<=i;j++)
        {
          if (i%j==0)
          count++;
        }
        if (count==2)
             printf("\n %d",i);
    }

}

