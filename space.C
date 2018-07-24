#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a[50];
	int i,count=0;
	scanf("%d",&a[50])
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i] == ' ')
		count++;
	}
	printf("%d",count);
	return 0;
}
