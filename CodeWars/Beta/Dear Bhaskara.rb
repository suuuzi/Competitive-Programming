// Problem: Dear Bhaskara (http://www.codewars.com/kata/dear-bhaskara) My Test Kata

def bhaskara(a, b, c)

  delta = (b * b) - (4 * a * c)
  
  if delta < 0
    return "No Bhaskara for you!"
  end
  
  x1 = ((b * -1) + Math.sqrt(delta)) / (2 * a)
  x2 = ((b * -1) - Math.sqrt(delta)) / (2 * a)

  return "X1 = #{format("%.2f", x1)} and X2 = #{format("%.2f", x2)}"
  
end
