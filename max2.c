#include <stdio.h>
  int main() {
    int a[10];
    int i;
    int max val;
    for (i = 0; i < 10; i++) 
    {
    	scanf("%d", &a[i]);
    }
    max val = a[0];
    for (i = 0; i < 10; i++) 
    {
	if (a[i] > max val) 
	{
	max val = a[i];
    }
    }
    printf("%d", max val);
    return 0;
  }
