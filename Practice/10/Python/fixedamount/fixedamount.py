from math import fabs
s, l1, r1, l2, r2, = map(int,input("Введите число и диапозон").split())
a= 0
if((s > ( r1 + r2 )) or ( s < ( l1 + l2 ))):
    print(-1)
else:
    if(( s - l1 ) >= l2):
        if(s <= ( l1 + r2 )):
            print (l1," ", s - l1)
        else:
            a = fabs(s - (l1 + r2))
            if ((l1 + a) < r1 and (r2 - a) > l2):
                print (l1 + a, " ", s - (l1 + a))
            else:
                print(-1)
    else:
        print (-1)