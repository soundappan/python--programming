#include<stdio.h>
int main()
{
int a,b,c,i,n;
scanf("%d",&n); 
a=0;
b=1;
for(i=0;i<= n-1;i++)
{
c=a+b;
printf("%d\n",a);
a=b;
b=c;
}
return 0;
}

