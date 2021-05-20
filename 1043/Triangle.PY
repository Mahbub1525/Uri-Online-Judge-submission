a=float(input())
b=float(input())
c=float(input())

if a+b > c and a+c>b and b+c>a :
    print('Perimetro =',a+b+c,sep='\n')
else:
    print('Area=',((a+b)/2)*c,sep='\n')
