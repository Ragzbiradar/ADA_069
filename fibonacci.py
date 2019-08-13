a=int(input("enter length of series :"))
x=0
y=1
i=0
z = []
while i<a:
     z.append(x)
     x,y=y,x+y
     i+=1
print(z)
    

