p = float(input("Enter Principle : "))
r = float(input("Ente Rate of iN : "))
t = float(input("Enter Time : "))
intr = (p*r*t)/100
print("Simple intrest is : ",intr)
cintr = p * ( 1 + (r/100))**t
print("Compound intrest is : ",cintr)
