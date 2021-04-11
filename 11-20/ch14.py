def fonskiyon(a):
    sayac = 0
    while a != 1:
        if a%2 != 0:
            a = 3*a + 1
            sayac += 1
        else:
            a = a/2
            sayac += 1
    return sayac
a = 0
for i in range(1000000-1):
    if i == 1:
        i +=1
    x = fonskiyon(i)
    if x > a:
        a = x
print(x)