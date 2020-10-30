from math import fabs 
print ("Введите время прихода первого пешехода, пример: '6 : 30'")
time1 = input().split()
print ("Введите время прихода второго пешехода, пример: '6 : 30'")
time2 = input().split()
h1 = int(time1[0])
colon = time1[1]
m1 = int(time1[2])
h2 = int(time2[0])
colon2 = time2[1]
m2 = int(time2[2])
minutes1 = h1 * 60 + m1
minutes2 = h2 * 60 + m2;
difference = fabs(minutes1 - minutes2);
if (difference <= 15):
	print ("Встреча состоиться")
else:
	print ("Встреча не состоится")