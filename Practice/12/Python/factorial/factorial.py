print ("Введите значение n")
n = int(input())
result = n
while (n > 1):
	result = result * (n - 1)
	n = n - 1
print (result)
