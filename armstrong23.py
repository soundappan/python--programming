x = int(input("Enter a number: "))  
sum = 0  
temp = x  
  
while x > 0:  
   digit = x % 10  
   sum += digit ** 3  
   temp //= 10  
  
if x == sum:  
   print(x,"is an Armstrong number")  
else:  
   print(x,"is not an Armstrong number")  
