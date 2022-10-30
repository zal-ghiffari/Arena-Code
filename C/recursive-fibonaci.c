#include<stdio.h>
int main()
{
int first=0, second=1, i, n, sum=0;
printf("Enter the number of terms: ");
scanf("%d",&n);
printf("Fibonacci Series:");
for(i=0 ; i<n ; i++)
{
if(i <= 1)
{
sum=i;
}
else
{
sum=first + second;
first=second;
second=sum;
}
printf(" %d",sum)
}
return 0;
}
