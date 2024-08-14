# The Body Mass Index (BMI) is calculator

height_in_cm = 181
weight_in_kg = 72

height_in_m = height_in_cm / 100

BMI = weight_in_kg / (height_in_m**2)

if BMI<=19 and BMI>=25 :
    print("The Person is Healthy and BMI is :",BMI)
elif BMI<19 :
    print("The Person is Underweight and BMI is :",BMI)
else :
    print("The Person is Overweight and BMI is :",BMI)
