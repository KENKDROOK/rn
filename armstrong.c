#include<stdio.h>
#include<conio.h>
void main()
{
int n,temp,r,sum=0;
printf("Enter the integer");
scanf("%d", &n);
temp=n;
while(n!=0)
{
r=n%10;
sum=sum+(r*r*r);
n/=10;
}
if(temp==sum)
{
printf("YES");
}
else
{
printf("NO");
}
getch();
}
