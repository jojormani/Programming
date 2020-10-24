from math import fabs 
x0 = int(input('Введите начальное положение х0: '))
v0 = int(input('Введите начальную скорость v0: '))
g = 9.8
t = int(input('Введите время t: '))
print ("Расстоение равно: ", fabs((x0+v0*t-(g*t*t)/2) - x0))