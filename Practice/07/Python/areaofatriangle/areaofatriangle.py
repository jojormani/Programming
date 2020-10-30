from math import sqrt
print ("Выберите метод вычисления S")
print ("введите 1, если хотите вычислить площадь треугольника координатным способом;")
print ("введите 2, если хотите вычислить площадь треугольника с помощью длин его сторон")
determinant = int(input())
if determinant == 1:
    print ("Введите координаты первой вершины")
    x1 = int(input())
    y1 = int(input())
    print ("Введите координаты второй вершины")
    x2 = int(input())
    y2 = int(input())
    print ("Введите координаты третьей вершины")
    x3 = int(input())
    y3 = int(input())
    if (((x1 == x2) and (x1 == x3) and (x2 == x3)) or ((y1 == y2) and (y1 == y3) and (y2 == y3)) or ((y1 == y2) and (x1 == x2)) or ((y1 == y3) and (x1 == x3)) or ((y2 == y3) and (x2 == x3))):
        print ("Такого треугольника не существует")
    else:
        a = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)))
        b = sqrt(((x3 - x2) * (x3 - x2)) + ((y3 - y2) * (y3 - y2)))
        c = sqrt(((x3 - x1) * (x3 - x1)) + ((y3 - y1) * (y3 - y1)))
        if ((a < b + c) and (b < a + c) and (c < a + b)):
            p = (a + b + c) / 2
            S = sqrt(p * (p - a) * (p - b) * (p - c))
            print ("S =", S)
        else:
            print ("Такого треугольника не существует")
elif determinant == 2:
    a = int(input())
    b = int(input())
    c = int(input())
    if ((a < b + c) and (b < a + c) and (c < a + b)):
        p = (a + b + c) / 2
        S = sqrt(p * (p - a) * (p - b) * (p - c))
    else:
        print ("Такого треугольника не существует")
else:
    print ("Ошибка ввода")