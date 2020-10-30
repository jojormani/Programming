print("Введите число для проверки")
number = int(input())
condition = 0
for i in range (2, number): 
	if (number % i == 0): 
		print("Составное число")
		condition = 1
		break
if (condition != 1):
	print("Простое число") 