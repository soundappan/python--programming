#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a[50];
	int i,count=1;
	scanf("%d",&a[50])
	for(i=0;a[i]!=' ';i++)
	{
		if(a[i] == ' ')
		count=count+1;
	}
	printf("%d",count);
	return 0;
}
