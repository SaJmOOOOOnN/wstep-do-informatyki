def wariancja(lis,n,suma=0):
    if lis==[]:
        srednia=suma/n
        return srednia,0
    suma+=lis[-1]
    sr, war=wariancja(lis[:-1],n,suma)
    war+=(lis[-1]-sr)**2/(n-1)
    return sr,war
def main():
    lista1=[3,3,3,3]
    lista2=[5,6,7,8,9]
    print(wariancja(lista1,len(lista1)))
    print(wariancja(lista2,len(lista2)))
main()