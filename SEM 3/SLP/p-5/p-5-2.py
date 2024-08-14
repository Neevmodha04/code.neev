num = []
for i in range(10):
	ele = int(input("Enter An ele:"))
	num.append(ele)
sum = int(0)
for j in num:
	for k in num:
		print(j,k,end="\t")
		sum += 1
	print()
print(f"The Total Nu of Pair is : {sum}")
