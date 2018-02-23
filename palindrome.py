a=int(input("Enter number:"))
temp=a
rev=0
while(a>0):
    dig=a%10
    rev=rev*10+dig
    a=a
if(temp==rev):
    print("yes")
else:
    print("no")
