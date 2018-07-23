hr1,mi1=input().split()
hr1,mi1=int(hr1),int(mi1)
hr2,mi2=input().split()
hr2,mi2=int(hr2),int(mi2)
l1=(hr1*60)+mi1
l2= (hr2*60)+mi2
total_min=abs(l1-l2)
min = total_min  % 60
hrs = (total_min - min) / 60
print (int(hrs),int(min))
