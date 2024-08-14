marks = int(input("Enter Marks : "))//10
def s_c(marks):
    s = {
        10:"A",
        9:"A",
	    8:"B",
	    7:"C",
	    6:"D",
	    5:"E",
	    4:"F",
	    3:"F",
	    2:"F",
	    1:"F",
	    0:"F",
    }
    return s.get(marks,"inv")

grade = s_c(marks)

print(f"{grade}")
