print ("Выберите способ обмена значений переменных")
print ("Введите 1, чтобы обменять значения переменных с помощью дополнительной переменной")
print ("Введите 2, чтобы обменять значения переменных без использования дополнительной переменной")
check = int(input())
if check == 1:
    print ("Введите первое число")
    number1 = int(input())
    print ("Введите второе число")
    number2 = int(input())
    addition = number1;
    number1 = number2;
    number2 = addition;
    print ("Значение первого числа", number1)
    print ("Значение второго числа", number2)
elif check == 2:
    print('Введите первое  число')
    number1 = int(input())
    print("Введите второе число")
    number2  = int(input())
    number1 = number1 + number2;
    number2 = number1 - number2;
    number1 = number1 - number2;
    print("Значение первого  числа", number1)
    print("Значение второго  числа", number2)
    


