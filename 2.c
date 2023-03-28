#include<stdio.h>
void main()
{
    int num,i,count;
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
            count++;
    }
    if(count==2)
        printf("prime number");
    else
        printf("not a prime number");
}
