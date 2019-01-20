#include<stdio.h>
#include<conio.h>
void main()
{
int n,num;
printf("enter testcase");
scanf("%d",&n);
while(n>0)
{
printf("enter number");
scanf("%d",&num);
if(num%2==0)
{
printf("even");
}
else
{
printf("odd");
}
n--;
}
getch();
}
