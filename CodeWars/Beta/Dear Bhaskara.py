// Problem: Dear Bhaskara (http://www.codewars.com/kata/dear-bhaskara) My Test Kata

from math import sqrt
 
def bhaskara(a, b, c):

  delta = (b * b) - (4 * a * c)

  if delta < 0:
    return "No Bhaskara for you!"

  x1 = ((b * -1) + sqrt(delta)) / (2 * a)
  x2 = ((b * -1) - sqrt(delta)) / (2 * a)

  return "X1 = %.2f and X2 = %.2f" % (x1, x2)
