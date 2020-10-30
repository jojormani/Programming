print ("Введите число")
number = int(input())
print("Введите степень")
degree = int(input())
result = number;
if ((degree == 1) and (number == 0)):
	print ("1")
if degree == 1:
	print(result)
if degree > 1:
		while degree > 1:
			result = result * number
			degree = degree - 1
		print (result)
if degree == 0: 

	print("1")
elif degree < 0:
		while degree < -1: 
			result = result * number
			degree = degree + 1
		print(1 / result)