a=9
b=5
print("Prime numbers between",9,"and",5,"are:")

for num in range(a,b + 1):
   # prime numbers are greater than 1
   if num > 1:
       for i in range(2,num):
           if (num % i) == 0:
               break
       else:
           print(num)
