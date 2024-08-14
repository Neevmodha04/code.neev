a = float(input("Enter Val of A : "))
b = float(input("Enter Val of B : "))
c = float(input("Enter Val of C : "))

max = a if (a>b and a>c) else (b if (b>c) else c)

print("Max is : ",max)
