import math

# method to print the divisors 
def numbersDivisors(n):
    i = 1
    y = 1
    while(i < n):
        if (n % i==0):
            y += 1
        i = i + 1
    return y
		



def divCount(n):

    hh = [1] * (n + 1)

    p = 2
    while((p * p) < n):
        if (hh[p] == 1):
            for i in range((p * 2), n, p):
                hh[i] = 0 
        p += 1 

	# Traversing through 
	# all prime numbers 
    total = 1
    for p in range(2, n + 1):
        if (hh[p] == 1):

			# calculate number of divisor 
			# with formula total div = 
			# (p1+1) * (p2+1) *.....* (pn+1) 
			# where n = (a1^p1)*(a2^p2).... 
			# *(an^pn) ai being prime divisor 
			# for n and pi are their respective 
			# power in factorization 
            count = 0
            if (n % p == 0):
                while (n % p == 0):
                    n = int(n / p)
                    count += 1 
                total *= (count + 1)				
    return total


#### en hızlı algoritma
def get_factors(n):
    return sum(2 for i in range(1, round(math.sqrt(n)+1)) if not n % i)
