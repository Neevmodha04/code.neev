import cmath as m

a = int(input("Enter Val of a : "))
b = int(input("Enter Val of b : "))
c = int(input("Enter Val of c : "))
d = (b**2) - (4*a*c)
print("the Dis is : ",d)

real = (-b + (m.sqrt(d) )) / (2*a)
real1 = (-b - (m.sqrt(d) )) / (2*a)

print("The First Real Root is : ",real,"\n The Second Real Root is : ",real1)
