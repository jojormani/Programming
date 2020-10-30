print ("Введите число")
number = int(input())
index = 0
amount = 0
for i in range (1, number+1):
    power = pow(2, index)
    if (power <= number):
        amount = amount + 1
    else:
        break
    index = index + 1
print (amount)
