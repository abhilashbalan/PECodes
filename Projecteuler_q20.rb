#Project Euler question 3
#Answer 648

def find_fact (num) #Recursive function to find the factorial
 if num <= 1
  return 1
 else
  return (num*find_fact(num-1))
 end
end

def find_sum (num) #Function to find the sum of digits in the factorial
 sum = 0
 while num > 0
  sum += num%10
  num /= 10
 end
 return sum
end
#Main
num = 100
fact = find_fact (num)
sum = find_sum (fact)
puts sum
