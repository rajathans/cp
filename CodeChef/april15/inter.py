import math
def divisorGenerator(n):
    large_divisors = []
    for i in xrange(1, int(math.sqrt(n) + 1)):
        if n % i is 0:
            yield i
            if i is not n / i:
                large_divisors.insert(0, n / i)
    for divisor in large_divisors:
        yield divisor

t = int(raw_input())
while t>0:
	t = t - 1
	n = int(raw_input())
	a = list(divisorGenerator(n))
	print sum(a)