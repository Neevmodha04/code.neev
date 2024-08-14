import math as m
h = float(input("Enter the height of wall : "))
a = float(input("Enter the Angle from Ledder : "))

l = h / (m.sin(m.radians(a)))

print("The length of ladder : ",l)
