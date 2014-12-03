import string
import random

cheeses = ['hunter', 'zhang', 'yes']
numbers = [17, 123]
empty = []

for cheese in cheeses:
	print cheese

cheeses.sort()

print cheeses

t = [1, 2, 3, 4]
print sum(t)

s = 'hunter'
tt = list(s)
print tt

eng2sp = {'one': 'uno', 'two': 'dos', 'three': 'tres'}
print eng2sp

known = {0:0, 1:1}

def f(n):
	if n in known:
		return known[n]

	res = f(n-1) + f(n-2)
	known[n] = res
	return res

print f(50)

verbose = True

def example():
	if verbose:
		print 'Hunter zhang is the best person'

print example()

t = [('a', 0), ('b', 1), ('c', 2)]

for letter, number in t:
	print letter, number

print random.random()

t = [1, 2, 3]
print random.choice(t)

