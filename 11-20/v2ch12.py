from functions import get_factors

x = 1
i = 2
while True:
    x = x + i
    i += 1
    print(f"***\n{x}\n***\n")
    a = get_factors(x)
    if a > 500:
        print(f"\nxxxxx\n{x}\nxxxxxx\n{a}\nxxxxx\n{i}\nxxxxx\n")
        break
    
