from functions import numbersDivisors

def triAngleNumberGenerator(stNumber):
    liste = [1]
    i = 2

    while i <= stNumber:
        x = liste[i-2] + i
        liste.append(x)
        i += 1
    
    return liste[stNumber-1]

# bolen sayısı > 500
# triangluar sayı bul bölen sayısını eğer büyükse 500 den dur
i = 1
while True:
    x = triAngleNumberGenerator(i)
    y = numbersDivisors(x)
    print(f"***\n{i}\n{x}\n{y}\n*****\n")
    if y > 500:
        print(f"Triangluar indexi: {i} \nTriangular değeri: {x}\nBÖlen sayısı: {y}")
        break
    i += 1
