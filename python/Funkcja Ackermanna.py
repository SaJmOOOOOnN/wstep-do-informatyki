def Ackermann(m,n):
    if m<0 or n<0:
        return None
    elif m==0:
        return n+1
    elif m>0 and n==0:
        return Ackermann(m-1,1)
    elif m>0 and n>0:
        return Ackermann(m-1,Ackermann(m,n-1))
def main():
    m=int(input('Podaj liczbę m: '))
    n=int(input('Podaj liczbe n: '))
    print(Ackermann(m,n))
main()