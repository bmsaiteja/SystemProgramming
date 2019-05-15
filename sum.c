#include<stdio.h>
int main()
{
int n,i,prod=1,sum=0;
printf("Enter n:");
scanf("%d",&n);
for(i=n;i>1;i--)
{
prod=prod*i;
}
while(prod>0)
{
sum=sum+prod%10;
prod=prod/10;
}
printf("%d",sum);
}
