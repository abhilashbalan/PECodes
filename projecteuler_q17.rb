#Project Euler question 17
#Answer 1366

big_num = 2**1000 #ONE BIG NUMBER
sum = 0 #Initiate sum
while big_num > 0 #Split it into characters and find the sum
 sum += big_num%10
 big_num /= 10
end
puts sum #Print the sum
