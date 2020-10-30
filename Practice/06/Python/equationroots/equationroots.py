from math import sqrt 
a = int(input("Введите значение переменной а: "))
b = int(input("Введите значение переменной b: "))
c= int(input("Введите значение переменной c: "))
if (a == 0 and b == 0):
    if c == 0:
        print ("Все корни являются верными")
    else: 
        print ("Корней не существует")
if (a == 0 and b != 0):
    if c == 0:
        print ("х = 0")
    else:
        print ("x = ", -c / b)
if (a != 0 and b == 0):
    if c == 0:
        print ("x = 0")
    else:
        if a > 0:
            if c > 0:
                print ("Корней нет")
            else: 
                print("x1 = ", sqrt(-c / a))
                print("x2 = ", -sqrt(-c / a))
        if a < 0:
            if c > 0:
                print("x1 = ", sqrt(-c / a))
                print("x2 = ", -sqrt(-c / a))
            else:
                print ("Корней нет")
if (a != 0 and b != 0):
    if c == 0:
        print ("x1 = 0")
        print ("x2 =", -b / a)
    else:
        diskriminant = b * b - 4 * a * c;
        if diskriminant < 0:
            print ("Корней нет")
        if diskriminant == 0:
            print ("x = ", -b / (2 * a))
        if diskriminant > 0:
            print ("x1 = ", (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a))
            print ("x2 = ", (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a))