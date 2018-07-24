#include<stdio.h>
int main()
{
  	char str[100];
  	int i, alphabets, digits, special;
  	i = alphabets = digits = 0;
 
  	printf("\n Please Enter any String  :  ");
    scanf("%d",str[i])
  	
  	while (str[i] != '\0')
  	{
  		if( (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') )
  		{
  			alphabets++;  	
 		}
  		else if (str[i] >= '0' && str[i] <= '9')
  		{
  			digits++;  	
  		}    
      return 0;
      }
