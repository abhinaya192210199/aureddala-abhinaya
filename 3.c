#include<stdio.h>
int main()
{
    int n,i=1,a,sum=0;
    scanf("%d",&n);
      while(i<n)
      {
          if(n%i==0)
            sum=sum+i;
          i++;
      }
        if(sum==n)
            printf("%d is a prefect number",n);
        else
            printf("\n %d is not a prime number",n);
}
