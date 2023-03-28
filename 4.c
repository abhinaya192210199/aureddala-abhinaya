#include<stdio.h>
int main()
{
    int num,originalNum,lastDigit,sum,i,factorial;
    scanf("%d",&num);
    originalNum = num;
    sum=0;
    while(num>0)
    {
        lastDigit=num%10;
        factorial=1;
        for (i=1;i<=lastDigit;i++)
        {
            factorial=factorial*i;
        }
        sum=sum+factorial;
        num=num/10;
    }
    if (sum == originalNum)
    {
        printf("%d is STRONG NUMBER", originalNum);
    }
    else
    {
          printf("%d is NOT STRONG NUMBER", originalNum);
    }
}

