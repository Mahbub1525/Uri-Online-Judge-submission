a=int(input())
b=int(input())

if a==b:
    print("O JOGO DUROU 24 HORA(S)\n")
elif a>b:
    print("O JOGO DUROU", int(b+24-a) ,"HORA(S)\n")
elif a<b:
    print("O JOGO DUROU", int(b-a) ,"16HORA(S)\n")
