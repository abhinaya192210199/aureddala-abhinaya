#include<stdio.h>
#include<math.h>
int main()
{
    int low,high;
    scanf("%d%d",&low,&high);
    printf("All Armstrong numbers between %d and %d are:\n", low, high);
    for(int n=low;n<=high;n++)
    {
        int num=n,rem,sum=0;
        if(n<=9)
        {
            printf("%d",n);
        }
        else
        {
            int digit = (int)log10(num)+1;
             while(num > 0)
            {
                rem = num % 10;
                sum = sum + pow(rem,digit);
                num = num / 10;
            }

            if (sum == n)
            {
                printf("%d ", n);

            }
        }
    }
}
