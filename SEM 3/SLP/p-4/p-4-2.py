rate = float(input("Enter ur rate of payout hourly : "))
hour = int(input("Enter Hr u worked : "))
overrate = float(input("Enter ur rate of overwork : "))

if(hour <= 40):
    print(hour*rate)
else:
    print(hour*rate+(hour-40)*overrate)
