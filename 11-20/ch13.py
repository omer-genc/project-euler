filename = "ch13.txt"
sum = 0
with open(filename) as dosya:
    lines = dosya.readlines()


toplam = 0
for line in lines:
    toplam += int(line)

toplam = str(toplam)
print(toplam)