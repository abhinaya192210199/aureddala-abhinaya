#include<stdio.h>
int main()
{
    int num1,num2,count=0,sum=0,i;
    scanf("%d%d",&num1,&num2);
    for(i=num1;i<num2;i++)
    {
        if(i%5==0)
        {
            printf("%3d",i);
            count++;
            sum=sum+i;
        }
    }
    printf("\n Number of integers divisible by 5 between %d and%d =%d\n",num1,num2,count);
    printf("Sum of all integers that are divisible by 5 = %d\n", sum);
}
