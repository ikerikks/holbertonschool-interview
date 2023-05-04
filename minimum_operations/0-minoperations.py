#!/usr/bin/python3

def minOperations(n):
  """ calculates the fewest number of operations
  needed to result in exactly n H characters in
  the file """

  if n < 1:
      return 0
  factors = []
  i = 2
  while i <= n:
      if n % i == 0:
          factors.append(i)
          n //= i
      else:
          i += 1
  if len(factors) == 0:
      return 0
  return sum(factors)
