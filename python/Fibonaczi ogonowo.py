def fib(n, wynik1=1, wynik2=1):
    if n==1 or n==2:
        return wynik2;
    if n<=0:
        return "Błąd"
    else:
        return fib(n-1,wynik2,wynik1+wynik2)
def main():
    n=int(input("Podaj liczbe n: "))
    print(fib(n))
main()