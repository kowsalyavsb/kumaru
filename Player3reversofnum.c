#include<stdio.h>
int main()
{
int num,temp;
scanf("%d",&num);
while(num!=0)
{
temp=num%10;
num=num/10;
printf("%d",temp);
}
return 0;
}

