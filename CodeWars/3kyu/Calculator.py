# Calculator (https://www.codewars.com/kata/calculator/)

class Calculator(object):
  def evaluate(self, string):
    return round(eval(string), 3)
